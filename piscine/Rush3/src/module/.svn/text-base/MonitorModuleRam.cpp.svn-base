#include "MonitorModuleRam.hh"

int MonitorModuleRam::delay = 1;

MonitorModuleRam::MonitorModuleRam() {

	this->_maxRam = 0;
	this->_usedRam = 0;
	this->_maxSwap = 0;
	this->_usedSwap = 0;
	this->_buffers = 0;
	this->_cached = 0;

}

MonitorModuleRam::~MonitorModuleRam() {

}

size_t MonitorModuleRam::getMaxRam() {
	refresh();
	return (this->_maxRam);
}

size_t MonitorModuleRam::getUsedRam() {
	refresh();
	return (this->_usedRam);
}

size_t MonitorModuleRam::getMaxSwap() {
	refresh();
	return (this->_maxSwap);
}

size_t MonitorModuleRam::getUsedSwap() {
	refresh();
	return (this->_usedSwap);
}

size_t MonitorModuleRam::getBuffers() {
	refresh();
	return (this->_buffers);
}

size_t MonitorModuleRam::getCached() {
	refresh();
	return (this->_cached);
}

float MonitorModuleRam::getPSwap() {
	refresh();
	return ((float) this->_usedSwap / this->_maxSwap * 100);
}

float MonitorModuleRam::getPRam() {
	refresh();
	return ((float) this->_usedRam / this->_maxRam * 100);
}

std::string MonitorModuleRam::getModuleName() const {
	return (MRAM_MODULE_NAME);
}

bool MonitorModuleRam::initialize() {
	return true;
}

void MonitorModuleRam::refresh() {
	if (time(0) > (_time + delay)) {
		size_t total;
		size_t used;
		size_t free;
		size_t shared;
		size_t buffers;
		size_t cached;
		size_t total2;
		size_t used2;
		size_t free2;

		std::stringstream ss(std::stringstream::in | std::stringstream::out);
		std::stringstream ss2(std::stringstream::in | std::stringstream::out);

		ss << ExecCommand::exec(MRAM_CLI_MEMINFO);
		ss2 << ExecCommand::exec(MRAM_CLI_SWAPINFO);

		ss >> total >> used >> free >> shared >> buffers >> cached;
		ss2 >> total2 >> used2 >> free2;

		this->_maxRam = total;
		this->_usedRam = used;
		this->_maxSwap = total2;
		this->_usedSwap = used2;
		this->_buffers = buffers;
		this->_cached = cached;
		_time = time(0);
	}
}
