/**
 *
 *
 *
 */

#ifndef __MONITORMODULEUSER_HH__
#define  __MONITORMODULEUSER_HH__

#include <string>
#include <cstdlib>
#include <iostream>
#include <sys/utsname.h>

#include "../common/ExecCommand.hh"
#include "IMonitorModule.hh"

class MonitorModuleUser : public IMonitorModule {
protected:
	std::string _user;
	std::string _kernel;
	std::string _os;
	std::string _compname;
	std::string _sysname;
public:
	MonitorModuleUser();
	~MonitorModuleUser();

	bool initialize();
	virtual std::string getModuleName() const;

	std::string getUser() const;
	std::string getKernel() const;
	std::string getOs() const;
	std::string getCompName() const;
	std::string getSysName() const;

	time_t getTime();
	time_t getUpTime();

};

#endif // !  __MONITORMODULEUSER_HH__
