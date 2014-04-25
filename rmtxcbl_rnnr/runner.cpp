#include "runner.hpp"

#include <stdio.h>
#include <iostream>

Runner::Runner(int port):
    tcpAcceptor( port ),
    running( false )
{
}

Runner::~Runner()
{
}

void Runner::run()
{
    this->tcpAcceptor.start();
    this->running = true;

    std::cout << "Wait for incoming connections..." << std::endl;
    while(running)
    {
        TCPStream* newStream = tcpAcceptor.accept();
        std::cout << "new accepted connection" << std::endl;
    }
}

void Runner::stop()
{
    this->running = false;
}
