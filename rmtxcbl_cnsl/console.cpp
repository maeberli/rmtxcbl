#include <iostream>
#include <fstream>
#include "console.hpp"

using namespace std;
namespace rmtxcbl
{

/*********************************\
 Constructor/Destructor
\*********************************/
Console::Console(const std::string exec, const std::string label, const std::string remHost, const int port)
:execManager(exec), label(label), remHost(remHost), port(port), stream(NULL)
{
}

Console::~Console(void)
{
    delete stream;
}

/*********************************\
 Public
\*********************************/
bool Console::sendExecAndListen(void)
{
    bool flag = false;
    flag &= sendExec();
    flag &= listen();
    return flag;
}

void Console::stopListen(void)
{
    this->listenning = false;
}

/*********************************\
 Private
\*********************************/
bool Console::sendExec(void)
{
    if( !execManager.importExec() )
    {
        std::cout << std::endl << "Error : Failed to import exec " << label << std::endl << std::endl;
        return false;
    }
    
    rmtxcbl::Executable *executable = new Executable();
    executable->set_exec(execManager.getExec(), execManager.getExecSize());
    executable->set_label(label); 

    rmtxcbl::TCPConnector connector;
    stream = connector.connect(remHost.c_str(), port);

    rmtxcbl::RmtxcblMessage rmtxcblMessage;
    rmtxcblMessage.set_type(rmtxcbl::RmtxcblMessage_Type_EXEC);
    rmtxcblMessage.mutable_executable()->CopyFrom(*executable);

    stream->sendMessage(rmtxcblMessage);
        
    return true;
}

bool Console::listen(void)
{
    this->listenning = true;
    RmtxcblMessage *msg;
    
    while(listenning)
    {
        if(stream->receiveMessage(&msg,30))
        {
            std::cout << std::endl << "===================================" << std::endl;
            if(msg->type() == rmtxcbl::RmtxcblMessage::OUTSTREAM)
            {
                std::cout << "output: " << msg->outstream().out() << std::endl;
            }
            else if(msg->type() == rmtxcbl::RmtxcblMessage::STATE)
            {
                std::cout << "state changed to: "
                          << msg->executablestate().state() << std::endl;
                std::cout << "     description: "
                          << msg->executablestate().description() << std::endl;

                if(msg->executablestate().state() == rmtxcbl::ExecutableState::STOPPED)
                {
                    this->listenning = false;
                }
            }
            else
            {
                std::cout << std::endl << "Successfull received message of type " << msg->type() << std::endl;
            }
            std::cout << "===================================" << std::endl  << std::endl;
        }
    }
    return false;
}
}
