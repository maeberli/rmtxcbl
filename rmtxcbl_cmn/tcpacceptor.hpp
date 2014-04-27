#ifndef TCPACCEPTOR_HPP
#define TCPACCEPTOR_HPP

#include "tcpstream.hpp"

namespace rmtxcbl
{

class TCPAcceptor
{

public:
    TCPAcceptor(int port, const char* address="");
    ~TCPAcceptor();

    int start();
    TCPStream* accept();

private:
    int listeningSocketdescriptor;
    string addressString;
    int port;
    bool listening;
};

}

#endif
