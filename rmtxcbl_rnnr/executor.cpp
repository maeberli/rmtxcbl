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
        std::cout << std::endl << "===================================" << std::endl;
        if(msg->type() == 1)
        {
            std::cout << "Successfull received executable" << std::endl;
            std::cout << "received type: " << msg->type() << std::endl;
            std::cout << "recveived label: " << msg->executable().label() << std::endl;
            std::cout << "received exec: " << msg->executable().exec() << std::endl;
        } else {
            std::cout << std::endl << "Successfull received message of type " << msg->type() << std::endl;
        }
        std::cout << "===================================" << std::endl  << std::endl;
        
        rmtxcbl::Stream *streamMessage = new rmtxcbl::Stream();
        streamMessage->set_in("["+msg->executable().label()+"] : in Test");
        streamMessage->set_out("["+msg->executable().label()+"] : out Test");
        streamMessage->set_err("["+msg->executable().label()+"] : err Test");
        rmtxcbl::RmtxcblMessage rmtxcblMessage;
        rmtxcblMessage.set_type(rmtxcbl::RmtxcblMessage_Type_STREAM);
        rmtxcblMessage.set_allocated_stream(streamMessage);

        stream->sendMessage(rmtxcblMessage);
    }
    else
    {
        std::cout << "receiving error!" << std::endl;
    }
}

}
