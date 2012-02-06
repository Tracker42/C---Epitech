#include "MonitorModuleNetwork.hh"

int MonitorModuleNetwork::delay = 1;

MonitorModuleNetwork::MonitorModuleNetwork() {
	this->_bytesReceived = 0;
	this->_packetsReceived = 0;
	this->_bytesTransmited = 0;
	this->_packetsTransmited = 0;
}

MonitorModuleNetwork::~MonitorModuleNetwork() {

}

size_t MonitorModuleNetwork::getBytesReceived() {
	refresh();
	return (this->_bytesReceived);
}

size_t MonitorModuleNetwork::getPacketsReceived() {
	refresh();
	return (this->_packetsReceived);
}

size_t MonitorModuleNetwork::getBytesTransmited() {
	refresh();
	return (this->_bytesTransmited);
}

size_t MonitorModuleNetwork::getPacketsTransmited() {
	refresh();
	return (this->_packetsTransmited);
}

std::string MonitorModuleNetwork::getModuleName() const {
	return (MNETWORK_MODULE_NAME);
}

bool MonitorModuleNetwork::initialize() {
	return (true);
}

void MonitorModuleNetwork::refresh() {
	if (time(0) > (_time + delay)) {
		size_t br;
		size_t pr;
		size_t bt;
		size_t pt;
		size_t blank;

		std::stringstream ss(std::stringstream::in | std::stringstream::out);
		ss << ExecCommand::exec("cat /proc/net/dev | grep wlan0: | cut -d: -f2");

		ss >> br >> pr >> blank >> blank >> blank >> blank >> blank >> blank
			>> bt >> pt;

		this->_bytesReceived = br;
		this->_packetsReceived = pr;
		this->_bytesTransmited = bt;
		this->_packetsTransmited = pt;

		_time = time(0);
	}
}
