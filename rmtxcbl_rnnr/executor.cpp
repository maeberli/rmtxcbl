#include "executor.hpp"

#include <string.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <sys/stat.h>

namespace rmtxcbl
{

Executor::Executor(TCPStream *stream) :
    stream(stream),
    filename(""),
    label("")
{
}

void Executor::process(void)
{
    std::cout << this->label << "start receiving exectuable" << std::endl;
    RmtxcblMessage *msg;
    if(stream->receiveMessage(&msg, 5))
    {
        if(msg->type() == rmtxcbl::RmtxcblMessage_Type_EXEC)
        {
            std::cout << this->label << "Successfull received executable" << std::endl;
            const Executable &exec = msg->executable();

            this->setFilename( exec.label() );
            this->setLabel( exec.label() );

            this->saveBinary( exec.exec().c_str(), exec.exec().length() );
            std::cout << this->label << "Saved binary file to: "
                << this->filename << std::endl;

            this->setExecPermission();
            this->runExecutable();

            std::cout << this->label << "finished execution." << std::endl;
        }
        else
        {
            sendState(
                    this->label + "Unexpected message received",
                    rmtxcbl::ExecutableState::STOPPED);
        }
    }
    else
    {
        std::cout << this->label << "Receiving error!" << std::endl;
    }
}

void Executor::saveBinary(const char *buffer, size_t size)
{
    std::ofstream outfile( this->filename.c_str(), std::ofstream::binary);
    outfile.write (buffer,size);
    outfile.close();
}

bool Executor::runExecutable(void)
{
    int link[2];
    pid_t pid;

    if(pipe(link)==-1)
    {
        std::string errorMsg = this->label = "Error during pipe creation. Abort!";
        perror(errorMsg.c_str());
        return false;
    }

    if( (pid = fork()) == -1)
    {
        std::string errorMsg =
            this->label
            + "Errro during forking in Executor::runExecutable(). Aborting!";

        perror( errorMsg.c_str() );
        return false;
    }
    else if(pid == 0)
    {
        dup2(link[1], STDOUT_FILENO);
        close(link[0]);
        
        // run executable
        sendState(
                this->label + "Start execution",
                rmtxcbl::ExecutableState::STARTED);

        int code = system(this->filename.c_str());
        if(code == -1)
        {
            std::string errorMsg = this->label + "child process error";
            perror(errorMsg.c_str());
            
            sendState(
                    this->label + "Running failed. Runner internal error",
                    rmtxcbl::ExecutableState::STOPPED);
        }

        sendState(
            this->label + "Finished execution with: " + toString(code),
            rmtxcbl::ExecutableState::STOPPED);
    }
    else
    {
        close(link[1]);
        
        readFromPipe(link[0]);
    }

    return true;
}

void Executor::sendStdOut(std::string line)
{
    rmtxcbl::RmtxcblMessage msg;
    msg.set_type(rmtxcbl::RmtxcblMessage_Type_OUTSTREAM);

    msg.mutable_outstream()->set_out(line);

    stream->sendMessage(msg);
}

void Executor::sendState(std::string description, rmtxcbl::ExecutableState::State state)
{
    rmtxcbl::RmtxcblMessage msg;
    msg.set_type(rmtxcbl::RmtxcblMessage_Type_STATE);

    msg.mutable_executablestate()->set_description(description);
    msg.mutable_executablestate()->set_state(state);

    stream->sendMessage(msg);
}

void Executor::readFromPipe(int fd)
{
    FILE *stream;
    int c;
    std::string str;
    stream = fdopen(fd, "r");
    while( (c = fgetc(stream)) != EOF)
    {
        if(c == '\n')
        {
            sendStdOut(str);
            str = "";
        }
        else
        {
        str += c;
        }
    }
    if(str.length() != 0)
    {
        sendStdOut(str);
    }

    fclose(stream);
}

void Executor::setExecPermission(void) const
{
    if(-1==chmod(this->filename.c_str(), S_IRWXU))
    {
        std::string msg = this->label + "Setting exec permission error";
        perror(msg.c_str());
    }
}

void Executor::setFilename(std::string label)
{
    time_t rawtime;
    time(&rawtime);

    this->filename = "./" + label + toString(rawtime) + ".a";
}

void Executor::setLabel(std::string label)
{
    this->label = "[" + label + "]";
}

std::string Executor::toString(time_t val) const
{
    stringstream ss;
    ss << val;
    return ss.str();
}

}
