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
    void setFilename(std::string label);
    std::string toString(time_t val) const;

};

}

#endif
