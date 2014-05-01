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

    // std::cout << "will send exec: " << executable->exec() << std::endl;
    // std::cout << "size of " << sizeof(execManager.getExec()) << std::endl;
    // std::cout << "will send label: " << executable->label() << std::endl; 
    
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
            if(msg->type() == 2)
            {
                std::cout << "Successfull received stream" << std::endl;
                std::cout << "received type: " << msg->type() << std::endl;
                std::cout << "recveived in: " << msg->stream().in() << std::endl;
                std::cout << "recveived out: " << msg->stream().out() << std::endl;
                std::cout << "recveived err: " << msg->stream().err() << std::endl;
            } else {
                std::cout << std::endl << "Successfull received message of type " << msg->type() << std::endl;
            }
            std::cout << "===================================" << std::endl  << std::endl;
        }
    }
    return false;
}
}