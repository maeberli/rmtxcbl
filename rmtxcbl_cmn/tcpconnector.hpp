#ifndef TCPCONNECTOR_HPP
#define TCPCONNECTOR_HPP

#include "tcpstream.hpp"

#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

namespace rmtxcbl
{

class TCPConnector
{
public:
    TCPStream* connect(const char* server, int port);

private:
    int resolveHostName(const char* host, struct in_addr* addr);

};

}

#endif
