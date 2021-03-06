#ifndef RUNNER_HPP
#define RUNNER_HPP

#include "tcpacceptor.hpp"

namespace rmtxcbl
{

class Runner
{

public:
    Runner(int port);
    ~Runner(void);
    
    void run(void);
    void stop(void);

private:
    
    TCPAcceptor tcpAcceptor;
    bool running;


    void forkAndHandle(TCPStream *stream);
    void handle(TCPStream *stream);
};

}

#endif
