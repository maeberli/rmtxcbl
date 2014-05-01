#ifndef CONSOLE
#define CONSOLE

#include <string>
#include "execManager.hpp"
#include "rmtxcbl.pb.h"
#include "tcpconnector.hpp"

namespace rmtxcbl
{
    
class Console {
    public:
        Console(const std::string exec,const std::string label, const std::string remHost, const int port);
        ~Console(void);
        
        bool sendExecAndListen(void);
        void stopListen(void);
        
        
    private:
        bool sendExec(void);
        bool listen(void);
        std::string toString(rmtxcbl::ExecutableState::State state);
    
    
        rmtxcbl::ExecManager execManager;
        const std::string label;
        const std::string remHost;
        const int port;
        bool listenning;
        rmtxcbl::TCPStream *stream;
};

}
#endif
