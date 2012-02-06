#ifndef ANCURSESDISPLAY_HH
#define ANCURSESDISPLAY_HH

#include <string>
#include "IMonitorDisplay.hh"

#include "IMonitorDisplay.hh"

class ANCursesDisplay : public IMonitorDisplay {
protected:
	std::string name;
	int minWidth;
	int minHeight;

public:
	ANCursesDisplay(std::string, int, int);
	virtual ~ANCursesDisplay();
	virtual std::string getName();
	virtual int getMinWidth();
	virtual int getMinHeight();
};

#endif
