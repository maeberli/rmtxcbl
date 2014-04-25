#ifndef RUNNER_HPP
#define RUNNER_HPP

#include "tcpacceptor.hpp"

class Runner
{

public:
    Runner(int port);
    ~Runner();
    
    void run();
    void stop();

private:
    
    TCPAcceptor tcpAcceptor;
    bool running;


    void forkAndHandle(TCPStream *stream);
    void handle(TCPStream *stream);
};


#endif
