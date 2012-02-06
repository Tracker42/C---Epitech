#ifndef NCURSESDISPLAYRAM_HH
#define NCURSESDISPLAYRAM_HH

#include <ncurses.h>
#include "ANCursesDisplay.hh"
#include "../module/MonitorModuleRam.hh"

class NCursesDisplayRam : public ANCursesDisplay {
protected:
	MonitorModuleRam *ram;
public:
	NCursesDisplayRam(MonitorModuleRam *);
	virtual ~NCursesDisplayRam();
	void display(int, int, int, int);

	virtual bool initialize();
	virtual std::string getModuleName() const;

};

#endif
