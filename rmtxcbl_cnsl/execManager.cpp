#include <iostream>
#include <fstream>
#include "execManager.hpp"

using namespace std;
namespace rmtxcbl
{

ExecManager::ExecManager(const std::string path)
:path(path)
{
	this->exec = NULL;
}

ExecManager::~ExecManager(void)
{
	delete[] exec;
}

bool ExecManager::importExec(void)
{
	streampos size;
	
	ifstream file(this->path.c_str(), ios::in|ios::binary|ios::ate);
	if(file.is_open())
	{
		size = file.tellg();
		this->exec = new char [size];
		file.seekg(0, ios::beg);
		file.read(this->exec, size);
		file.close();
		return true;
	}
	else 
	{
		return false;
	}
}

char* ExecManager::getExec(void)
{
	return this->exec;
}

}
