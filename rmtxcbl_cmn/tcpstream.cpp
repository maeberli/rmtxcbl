#include "tcpstream.hpp"

#include <arpa/inet.h>
#include <stdio.h>

namespace rmtxcbl
{

const int TCPStream::MAX_MESSAGE_SIZE = 1 * 1024 /*kb*/ * 1024 /*mb*/;
/*********************************\
 Public
\*********************************/

TCPStream::~TCPStream()
{
    close(socketdescriptor);
}

string TCPStream::getPeerIP()
{
    return this->peerIP;
}

int TCPStream::getPeerPort()
{
    return this->peerPort;
}

/**
 *	@return true if message recieved, false otherwise. 
 */
bool TCPStream::receiveMessage(RmtxcblMessage **msg, int timeout)
{
    char buffer[MAX_MESSAGE_SIZE];

    int received_bytes = receive(buffer, MAX_MESSAGE_SIZE, timeout);
    if( received_bytes > 0 )
    {
        *msg = new RmtxcblMessage();
        return (*msg)->ParseFromArray(buffer, received_bytes);
    }
    else if ( received_bytes != connectionTimedOut )
    {
        perror("error during message receive");
    }
    return false;
}

bool TCPStream::sendMessage(const RmtxcblMessage &msg)
{
    int size = msg.ByteSize(); 
    char *buffer = (char*)malloc(size);
    msg.SerializeToArray(buffer, size);

    this->sendBuffer(buffer, size);

    free(buffer);
}

/*********************************\
 Private Contructor
\*********************************/

TCPStream::TCPStream(int socketdescriptor, struct ::sockaddr_in* address) :
    socketdescriptor(socketdescriptor)
{
    char ip[50];
    inet_ntop(PF_INET, (struct ::in_addr*)&(address->sin_addr.s_addr),
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

/*********************************\
 Private
\*********************************/

ssize_t TCPStream::sendBuffer(char* buffer, size_t len)
{
    return write( socketdescriptor, buffer, len );
}

ssize_t TCPStream::receive(char* buffer, size_t len, int timeout)
{
    if (timeout <= 0) return read(socketdescriptor, buffer, len);
    
    if (waitForReadEvent(timeout) == true)
    {
        int res = read(socketdescriptor, buffer, len);
        return res;
    }
    return connectionTimedOut;
}

bool TCPStream::waitForReadEvent(int timeout)
{
    fd_set sdset;
    struct timeval tv;

    tv.tv_sec = timeout;
    tv.tv_usec = 0;
    FD_ZERO(&sdset);
    FD_SET(socketdescriptor, &sdset);

    if(select(socketdescriptor + 1, &sdset, NULL, NULL, &tv) > 0)
    {
        return true;
    }

    return false;
}

}
