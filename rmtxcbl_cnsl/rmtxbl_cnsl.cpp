#include <iostream>
#include <string>

bool parseArgs(int argc, char** argv, std::string *out_exec, std::string *out_remhost);
void printHelp(char *argv0, std::string errorMsg);
void printHelp(char *argv0);

int main(int argc, char** argv)
{
    std::string exec = "";
    std::string remhost = "";
    if( !parseArgs(argc, argv, &exec, &remhost) )
    {
        printHelp(argv[0], "Invalid arguments");
        return 2;
    }

    return 0;
}

bool parseArgs(int argc, char** argv, std::string *out_exec, std::string *out_remhost)
{
    if(argc < 3)
        return false;

    *out_exec = std::string( argv[1] );
    *out_remhost = std::string( argv[2] );

    
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
              << " This application sends an excutable to remote rmtxcbl_runner" << std::endl
              << " and launches it on the remote host." << std::endl
              << std::endl
              << "usage: " << argv0 << " exec remhost" << std::endl
              << std::endl
              << "  exec     path to the local executable, " << std::endl
              << "            which will be transfered and executed" << std::endl
              << "  remhost  destination host or ip-address containing" << std::endl
              << "            the rmtxcbl_rnnr" << std::endl;
}
