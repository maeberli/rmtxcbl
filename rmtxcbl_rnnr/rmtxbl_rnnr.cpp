#include <iostream>
#include <string>

#include "runner.hpp"

bool parseArgv(int argc, char** argv);
void printHelp(char *argv0, std::string errorMsg);
void printHelp(char *argv0);

int main(int argc, char** argv)
{
    if( !parseArgv(argc, argv) )
    {
        printHelp(argv[0], "Invalid arguments");
        return 2;
    }

    Runner runner(6686);
    runner.run();

    return 0;
}

bool parseArgv(int argc, char** argv)
{
    return true;
}

void printHelp(char *argv0, std::string errorMsg)
{
    std::cout << " --- "  << errorMsg << " --- " << std::endl << std::endl;
    printHelp(argv0);
}

void printHelp(char *argv0)
{
    std::cout << "usage of " << argv0 << std::endl
              << " This application opens a tcp/ip socket and listens for incomming " << std::endl
              << " execution demands, requestes by rmtxcbl_cnsl" << std::endl
              << std::endl
              << "usage: " << argv0 << std::endl
              << std::endl
              << "  no parameters required" << std::endl;
}

