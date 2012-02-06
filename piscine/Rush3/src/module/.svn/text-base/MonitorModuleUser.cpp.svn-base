/**
 *
 *
 *
 */

#include "MonitorModuleUser.hh"

MonitorModuleUser::MonitorModuleUser() {
}

MonitorModuleUser::~MonitorModuleUser() {
}

bool MonitorModuleUser::initialize() {
	_user = getenv("USERNAME");
	struct utsname info;
	uname(& info);
	_kernel = info.release;
	_os = info.version;
	_compname = info.machine;
	_sysname = info.sysname;
	return true;
}

std::string MonitorModuleUser::getUser() const {
	return _user;
}

std::string MonitorModuleUser::getKernel() const {
	return _kernel;
}

std::string MonitorModuleUser::getOs() const {
	return _os;
}

std::string MonitorModuleUser::getCompName() const {
	return _compname;
}

std::string MonitorModuleUser::getSysName() const {
	return _sysname;
}

time_t MonitorModuleUser::getTime() {
	return time(0);
}

time_t MonitorModuleUser::getUpTime() {
	std::string uptime = ExecCommand::exec("cat /proc/uptime");
	std::stringstream ss;
	ss << uptime;
	time_t val;
	ss >> val;

	return val;
}

std::string MonitorModuleUser::getModuleName() const {
	return ("USER");
}
