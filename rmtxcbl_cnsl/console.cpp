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
    std::cout << "Exec imported" << std::endl;
    
    rmtxcbl::Executable executable;
    std::cout << "size of " << sizeof(execManager.getExec()) << std::endl;
    executable.set_exec(execManager.getExec());
    executable.set_label(label); 
    std::cout << "Protobuf executable setted" << std::endl;

    rmtxcbl::TCPConnector connector;
    stream = connector.connect(remHost.c_str(), port);
    std::cout << "Connected" << std::endl;

    std::cout << "will send exec: " << executable.exec() << std::endl;
    std::cout << "will send label: " << executable.label() << std::endl; 

    stream->sendMessage(executable);
    std::cout << "Message sent" << std::endl;
        
    google::protobuf::ShutdownProtobufLibrary();
    return true;
}

bool Console::listen(void)
{
    this->listenning = true;
    return false;
}
}
