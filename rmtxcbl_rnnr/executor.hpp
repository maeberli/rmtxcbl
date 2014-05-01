#ifndef EXECUTOR_HPP
#define EXECUTOR_HPP

#include "tcpstream.hpp"

namespace rmtxcbl
{
class Executor
{
public:
    Executor(TCPStream *stream);

    void process(void);

private:
    TCPStream *stream;
    std::string filename;

    void saveBinary(const char *buffer, size_t size);
    bool runExecutable(void);
    void sendStdOut(std::string line);
    void sendStdErr(std::string line);
    void sendState(std::string state);

    void readFromPipe(int fd);
    
    void setExecPermission(void) const;
    void setFilename(std::string label);
    std::string toString(time_t val) const;

};

}

#endif
