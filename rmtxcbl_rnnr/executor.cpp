#include "executor.hpp"

#include <string.h>
#include <iostream>
#include <sstream>
#include <fstream>

namespace rmtxcbl
{

Executor::Executor(TCPStream *stream) :
    stream(stream)
{
}

void Executor::process(void)
{
    std::cout << "start receiving exectuable" << std::endl;
    RmtxcblMessage *msg;
    if(stream->receiveMessage(&msg, 5))
    {
        std::cout << "Successfull received executable" << std::endl;

        setFilename( msg->label() );
        saveBinary( msg->exec().c_str(), msg->exec().length() );
        std::cout << "Saved binary file to: " << this->filename << std::endl;
    }
    else
    {
        std::cout << "Receiving error!" << std::endl;
    }
}

void Executor::saveBinary(const char *buffer, size_t size)
{
    std::ofstream outfile( this->filename.c_str(), std::ofstream::binary);
    outfile.write (buffer,size);
    outfile.close();
}

void Executor::setFilename(std::string label)
{
    time_t rawtime;
    time(&rawtime);

    this->filename = label + toString(rawtime) + ".a";
}

std::string Executor::toString(time_t val) const
{
    stringstream ss;
    ss << val;
    return ss.str();
}

}
