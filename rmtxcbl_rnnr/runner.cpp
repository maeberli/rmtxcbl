#include "runner.hpp"

#include <stdio.h>
#include <iostream>

#include "executor.hpp"

namespace rmtxcbl
{

/*********************************\
 Constructor/Destructor
\*********************************/

Runner::Runner(int port):
    tcpAcceptor( port ),
    running( false )
{
}

Runner::~Runner(void)
{
}

/*********************************\
 Public
\*********************************/

void Runner::run(void)
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

void Runner::stop(void)
{
    this->running = false;
}

/*********************************\
 Private
\*********************************/

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
    Executor executor(stream);
    std::cout << "created executor" << std::endl;

    executor.process();

    delete stream;
}

}
