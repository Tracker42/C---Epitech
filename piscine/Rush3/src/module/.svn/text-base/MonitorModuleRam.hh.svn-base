#ifndef __MONITORMODULERAM_HH__
#define __MONITORMODULERAM_HH__

#include <iostream>
#include <sstream>

#include "IMonitorModule.hh"
#include "../common/ExecCommand.hh"

#define MRAM_MODULE_NAME "RAM"
#define MRAM_CLI_MEMINFO "free|grep Mem:|cut -d: -f2"
#define MRAM_CLI_SWAPINFO "free|grep Swap:|cut -d: -f2"

class MonitorModuleRam : public IMonitorModule {
protected:
	static int delay;
	int _time;
	size_t _maxRam;
	size_t _usedRam;
	size_t _maxSwap;
	size_t _usedSwap;
	size_t _buffers;
	size_t _cached;

public:
	MonitorModuleRam();
	~MonitorModuleRam();

public:
	size_t getMaxRam();
	size_t getUsedRam();
	size_t getMaxSwap();
	size_t getUsedSwap();
	size_t getBuffers();
	size_t getCached();

	float getPSwap();
	float getPRam();

	virtual std::string getModuleName() const;

	virtual bool initialize();
	void refresh();
};

#endif
