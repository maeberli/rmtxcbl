#include <iostream>
#include <fstream>
#include "execManager.hpp"

using namespace std;

ExecManager::ExecManager(const std::string relativePath)
:relativePath(relativePath)
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
	
	ifstream file(this->relativePath.c_str(), ios::in|ios::binary|ios::ate);
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
