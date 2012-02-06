
#ifndef __MONITORMODULENETWORK_HH__
#define __MONITORMODULENETWORK_HH__

#include <iostream>
#include <sstream>

#include "IMonitorModule.hh"
#include "../common/ExecCommand.hh"

#define MNETWORK_MODULE_NAME "NETWORK"
#define MNETWORK_CLI_NETINFO "cat /proc/net/dev | grep wlan0: | cut -d: -f2"

class MonitorModuleNetwork : public IMonitorModule {
protected:
	static int delay;
	int _time;
	size_t _bytesReceived;
	size_t _packetsReceived;
	size_t _bytesTransmited;
	size_t _packetsTransmited;

public:
	MonitorModuleNetwork();
	~MonitorModuleNetwork();

public:
	size_t getBytesReceived();
	size_t getPacketsReceived();
	size_t getBytesTransmited();
	size_t getPacketsTransmited();

	virtual std::string getModuleName() const;

	virtual bool initialize();
	void refresh();
};

#endif
