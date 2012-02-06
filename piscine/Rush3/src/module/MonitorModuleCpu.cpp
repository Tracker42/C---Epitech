/**
 *
 *
 *
 */

#include "MonitorModuleCpu.hh"

MonitorModuleCpu::MonitorModuleCpu() {
	_nbCore = 0;
	_cores = NULL;
}

MonitorModuleCpu::~MonitorModuleCpu() {
	if (_cores) {
		int i;
		for (i = 0; i < _nbCore; i++) {
			delete _cores[i];
		}
		delete _cores;
	}
}

bool MonitorModuleCpu::initialize() {
	std::string nbCore = ExecCommand::exec(MCPU_CLI_NBCORE);
	if (!nbCore.empty()) {
		std::stringstream ss;
		ss << nbCore;
		ss >> _nbCore;
		int i;
		_cores = new CpuCore*[_nbCore];
		for(i = 0; i < _nbCore; i++) {
			_cores[i] = new CpuCore(i);
		}
		return true;
	}
	return false;
}

std::string MonitorModuleCpu::getModuleName() const {
	return MCPU_MODULE_NAME;
}

int MonitorModuleCpu::getNbCore() const {
	return _nbCore;
}

CpuCore & MonitorModuleCpu::getCore(int id) const {
	if (id >= 0 && id < _nbCore) {
		return *(_cores[id]);
	}
	throw std::exception();
}

CpuCore & MonitorModuleCpu::operator [](int id) const {
	return getCore(id);
}
