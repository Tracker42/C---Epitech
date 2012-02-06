#ifndef NCURSESDISPLAYNETWORK_HH
#define NCURSESDISPLAYNETWORK_HH

#include <ncurses.h>
#include "ANCursesDisplay.hh"
#include "../module/MonitorModuleNetwork.hh"

class NCursesDisplayNetwork : public ANCursesDisplay {
protected:
	MonitorModuleNetwork *network;
public:
	NCursesDisplayNetwork(MonitorModuleNetwork *);
	virtual ~NCursesDisplayNetwork();
	void display(int, int, int, int);

	virtual bool initialize();
	virtual std::string getModuleName() const;

};

#endif
