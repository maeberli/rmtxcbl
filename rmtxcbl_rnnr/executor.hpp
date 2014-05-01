#ifndef EXECUTOR_HPP
#define EXECUTOR_HPP

#include "tcpstream.hpp"

namespace rmtxcbl
{
class Executor
{
public:
    Executor(TCPStream *stream);

    void process();

private:
    TCPStream *stream;  
};

}


#endif
