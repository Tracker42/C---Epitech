#ifndef NCURSESDISPLAYCPU_HH
#define NCURSESDISPLAYCPU_HH

#include <ncurses.h>
#include "ANCursesDisplay.hh"
#include "../module/MonitorModuleCpu.hh"

class NCursesDisplayCpu : public ANCursesDisplay {
protected:
	MonitorModuleCpu *cpu;
public:
	NCursesDisplayCpu(MonitorModuleCpu *);
	virtual ~NCursesDisplayCpu();
	void display(int, int, int, int);

	virtual bool initialize();
	virtual std::string getModuleName() const;

};

#endif
