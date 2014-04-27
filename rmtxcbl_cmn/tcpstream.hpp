#ifndef TCPSTREAM_HPP
#define TCPSTREAM_HPP

#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string>

using namespace std;

namespace rmtxcbl
{

class TCPStream
{
public:
    friend class TCPAcceptor; // allows only the TCPAcceptor class to
                              // to instanciate TCPStream objects
    friend class TCPConnector;

    string getPeerIP();
    int getPeerPort();

private:
    int socketdescriptor;
    string peerIP;
    int peerPort;

    TCPStream(int sd, struct ::sockaddr_in* address);
    TCPStream();
    TCPStream(const TCPStream& stream);

    ssize_t sendBuffer(char* buffer, size_t len);
    ssize_t receive(char* buffer, size_t len);
};

}

#endif
