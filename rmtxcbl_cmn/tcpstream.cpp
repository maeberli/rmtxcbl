#include "tcpstream.hpp"

#include <arpa/inet.h>

/*********************************\
 Public
\*********************************/

string TCPStream::getPeerIP()
{
    return this->peerIP;
}

int TCPStream::getPeerPort()
{
    return this->peerPort;
}

/*********************************\
 Private
\*********************************/

TCPStream::TCPStream(int socketdescriptor, struct sockaddr_in* address) :
    socketdescriptor(socketdescriptor)
{
    char ip[50];
    inet_ntop(PF_INET, (struct in_addr*)&(address->sin_addr.s_addr),
            ip, sizeof(ip) - 1);
    
    this->peerIP = ip;
    this->peerPort = ntohs(address->sin_port);
}

TCPStream::TCPStream(const TCPStream& stream)
{
    this->peerIP = stream.peerIP;
    this->peerPort = stream.peerPort;
    this->socketdescriptor = stream.socketdescriptor;
}

ssize_t TCPStream::sendBuffer(char* buffer, size_t len)
{
    return write( socketdescriptor, buffer, len );
}

ssize_t TCPStream::receive(char* buffer, size_t len)
{
}
