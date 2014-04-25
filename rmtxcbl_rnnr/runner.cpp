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

        forkAndHandle(newStream);
    }
}

void Runner::stop()
{
    this->running = false;
}

void Runner::forkAndHandle(TCPStream *stream)
{
    int pid = fork();

    if(pid == 0)
    {
        //child process: handle here
        std::cout << "Successfull forked." << std::endl;
        handle(stream);
    }
    else if(pid > 0)
    {
        // parent process: nothing to do....
    }
    else
    {
        perror("Error: Not able to fork for new incomming connection.");
    }
}

void Runner::handle(TCPStream *stream)
{
    while(true)
        std::cout << "handle " << getpid() << std::endl;
}
