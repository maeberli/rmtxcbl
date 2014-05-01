#include <iostream>
#include <string>
#include "console.hpp"

bool parseArgs(int argc, char** argv,
        std::string *out_exec, std::string *out_label, std::string *out_remhost);
void printHelp(char *argv0, std::string errorMsg);
void printHelp(char *argv0);
void printError(std::string message);

int main(int argc, char** argv)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	
    std::string exec = "";
    std::string remhost = "";
    std::string label = "";
    if( !parseArgs(argc, argv, &exec, &label, &remhost) )
    {
        printHelp(argv[0], "Invalid arguments");
        return 2;
    }
    
    const int port = 6686;
    std::cout << std::endl << "===================================" << std::endl;
    std::cout << "Exec to send\t: " << exec << std::endl;
    std::cout << "With label\t: " << label << std::endl;
    std::cout << "Remote address\t: " << remhost << ":" << port << std::endl;
    std::cout << "===================================" << std::endl  << std::endl;
    
    rmtxcbl::Console console(exec, label, remhost, port);
    console.sendExecAndListen();
    
    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}

bool parseArgs(int argc, char** argv,
        std::string *out_exec, std::string *out_label, std::string *out_remhost)
{
    if(argc < 4)
        return false;

    *out_exec = std::string( argv[1] );
    *out_label = std::string( argv[2] );
    *out_remhost = std::string( argv[3] );

    
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
              << "usage: " << argv0 << " exec label remhost" << std::endl
              << std::endl
              << "  exec     path to the local executable, " << std::endl
              << "            which will be transfered and executed" << std::endl
              << "  label    label which is associated to the execution" << std::endl
              << "  remhost  destination host or ip-address containing" << std::endl
              << "            the rmtxcbl_rnnr" << std::endl;
}

void printError(std::string message)
{
	std::cout << std::endl << "Error : " << message << "\n\n";
}

