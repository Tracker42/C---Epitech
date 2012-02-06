#ifndef NCURSESDISPLAYUSER_HH
#define NCURSESDISPLAYUSER_HH

#include <ncurses.h>
#include "ANCursesDisplay.hh"
#include "../module/MonitorModuleUser.hh"

class NCursesDisplayUser : public ANCursesDisplay {
protected:
	MonitorModuleUser *user;
public:
	NCursesDisplayUser(MonitorModuleUser *);
	virtual ~NCursesDisplayUser();
	void display(int, int, int, int);

	virtual bool initialize();
	virtual std::string getModuleName() const;

};

#endif
