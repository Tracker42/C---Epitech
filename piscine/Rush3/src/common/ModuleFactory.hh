#ifndef __MODULEFACTORY_H__
#define __MODULEFACTORY_H__

#include <iostream>
#include <vector>

#include "../module/IMonitorModule.hh"
#include "../module/MonitorModuleCpu.hh"
#include "../module/MonitorModuleRam.hh"
#include "../module/MonitorModuleUser.hh"

class ModuleFactory {
protected:
	static ModuleFactory * instance;
	std::vector<IMonitorModule*> _modules;

public:
	ModuleFactory();
	~ModuleFactory();

	IMonitorModule * loadModule(std::string name);

	static IMonitorModule * getModule(std::string name);
	static ModuleFactory * getInstance();
};

#endif
