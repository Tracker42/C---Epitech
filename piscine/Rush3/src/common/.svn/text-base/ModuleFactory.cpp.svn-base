#include "ModuleFactory.hh"

ModuleFactory * ModuleFactory::instance = NULL;

ModuleFactory::ModuleFactory() {

}

ModuleFactory::~ModuleFactory() {

}

IMonitorModule * ModuleFactory::loadModule(std::string name) {
	std::vector<IMonitorModule *>::iterator begin = _modules.begin();
	while (begin != _modules.end()) {
		if ((*begin)->getModuleName() == name) {
			return *begin;
		}
		begin++;
	}
	IMonitorModule * module;
	if (name == "USER") {
		module = new MonitorModuleUser();
	}
	if (name == "CPU") {
		module = new MonitorModuleCpu();
	}
	if (name == "RAM") {
		module = new MonitorModuleRam();
	}
	module->initialize();
	_modules.push_back(module);
	return module;
}

IMonitorModule * ModuleFactory::getModule(std::string name) {
	return ModuleFactory::getInstance()->loadModule(name);
}

ModuleFactory * ModuleFactory::getInstance() {
	if (!instance) {
		instance = new ModuleFactory();
	}
	return instance;
}
