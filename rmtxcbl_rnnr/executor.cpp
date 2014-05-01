#include "executor.hpp"

#include <iostream>

namespace rmtxcbl
{

Executor::Executor(TCPStream *stream) :
    stream(stream)
{
}

void Executor::process()
{
    std::cout << "start receiving exectuable" << std::endl;
    RmtxcblMessage *msg;
    if(stream->receiveMessage(&msg, 5))
    {
        std::cout << "Successfull received executable" << std::endl;
        std::cout << "received type: " << msg->type() << std::endl;
        //std::cout << "recveived label: " << msg->label() << std::endl;
        //std::cout << "received exec: " << msg->exec() << std::endl;
    }
    else
    {
        std::cout << "receiving error!" << std::endl;
    }
}

}
