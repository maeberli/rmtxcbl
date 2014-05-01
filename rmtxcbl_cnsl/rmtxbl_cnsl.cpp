#include <iostream>
#include <string>
#include "execManager.hpp"
#include "rmtxcbl.pb.h"

#include "tcpconnector.hpp"

bool parseArgs(int argc, char** argv, std::string *out_exec, std::string *out_remhost);
void printHelp(char *argv0, std::string errorMsg);
void printHelp(char *argv0);
void printError(std::string message);

int main(int argc, char** argv)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	
    std::string exec = "";
    std::string remhost = "";
    if( !parseArgs(argc, argv, &exec, &remhost) )
    {
        printHelp(argv[0], "Invalid arguments");
        return 2;
    }
    
    std::cout << "Exec to send : " << exec << std::endl;
    std::cout << "At : " << remhost << std::endl;
    rmtxcbl::ExecManager execManager(exec);
    if( !execManager.importExec() )
    {
		printError("Failed to import exec : " + exec);
		return 0;
	}
	std::cout << "Exec imported" << std::endl;
	
	rmtxcbl::Executable executable;
    std::cout << "size of " << sizeof(execManager.getExec()) << std::endl;
	executable.set_exec(execManager.getExec());
	executable.set_label("DummyExecLabel"); 
	std::cout << "Protobuf executable setted" << std::endl;

    rmtxcbl::TCPConnector connector;
    rmtxcbl::TCPStream *stream = connector.connect("127.0.0.1", 6686);
    std::cout << "Connected" << std::endl;

    std::cout << "will send exec: " << executable.exec() << std::endl;
    std::cout << "will send label: " << executable.label() << std::endl; 

    stream->sendMessage(executable);

    std::cout << "Message sent" << std::endl;

    delete stream;
	
	// User sokets here
	std::cout << "[TODO] Message send via sockets" << std::endl;
	
	
	google::protobuf::ShutdownProtobufLibrary();
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

void printError(std::string message)
{
	std::cout << std::endl << "Error : " << message << "\n\n";
}

