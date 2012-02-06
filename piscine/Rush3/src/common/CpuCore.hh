/**
 *
 *
 *
 */

#ifndef __CPUCORE_HH__
#define	__CPUCORE_HH__

#include <string>

#include "ExecCommand.hh"

#define CCORE_CLI_CORENAME "cat /proc/cpuinfo | grep \"model name\""
#define CCORE_CLI_LOAD "cat /proc/stat | grep cpu"
#define CCORE_CLI_FREQUENCY "cat /proc/cpuinfo | grep \"cpu MHz\""

class CpuCore {
protected:
	static int delay_load;
	static int delay_frequency;

	int _id;
	std::string _name;
	float _load_old;
	float _idle_old;
	float _load;
	float _frequency;

	time_t _time_load;
	time_t _time_frequency;


	void initialize();

public:
	CpuCore(int id);
	virtual ~CpuCore();

	int getId() const;
	std::string getName() const;
	float getLoad();
	float getFrequency();

};

#endif
