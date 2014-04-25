#ifndef EXEC_MANAGER
#define EXEC_MANAGER

#include <string>

class ExecManager {
	public:
		ExecManager(const std::string relativePath);
		~ExecManager(void);
		
		bool importExec(void);
		char* getExec(void);
		
	private:
		const std::string relativePath;
		char* exec;
};

#endif
