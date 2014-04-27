#include "tcpacceptor.hpp"

#include <stdio.h>
#include <string.h>

namespace rmtxcbl
{
#include <arpa/inet.h>
   

/*********************************\
 Constructor/Destructor
\*********************************/

TCPAcceptor::TCPAcceptor(int port, const char* address)
{
    this->listeningSocketdescriptor = 0;
    this->port = port;
    this->addressString = address;
    this->listening = false;
}

TCPAcceptor::~TCPAcceptor()
{}

/*********************************\
 Public
\*********************************/

int TCPAcceptor::start()
{
    if(listening)
    {
        return 0;
    }

    listeningSocketdescriptor = socket(PF_INET, SOCK_STREAM, 0);

    struct sockaddr_in address;
    memset(&address, 0, sizeof(address));
    address.sin_family = PF_INET;
    address.sin_port = htons(port);

    if(addressString.size() > 0)
    {
        inet_pton(PF_INET, addressString.c_str(), &(address.sin_addr));
    }
    else
    {
        address.sin_addr.s_addr = INADDR_ANY;
    }

    int optval = 1;
    setsockopt(listeningSocketdescriptor, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval) );

    int result = bind(listeningSocketdescriptor, (struct sockaddr*)&address, sizeof(address));
    if(result != 0)
    {
        perror("bind() failed");
        return result;
    }

    result = listen(listeningSocketdescriptor, 5);
    if(result != 0)
    {
        perror("listen() failed");
        return result;
    }

    listening = true;

    return result;
}

TCPStream* TCPAcceptor::accept()
{
    if(listening == false)
    {
        return NULL;
    }

    struct sockaddr_in address;
    socklen_t len = sizeof(address);
    memset(&address,0, sizeof(address));
    int sd = ::accept(listeningSocketdescriptor, (struct sockaddr*)&address, &len);
    if(sd < 0) {
        perror("accept() failed");
        return NULL;
    }

    return new TCPStream(sd, &address);
}

}
