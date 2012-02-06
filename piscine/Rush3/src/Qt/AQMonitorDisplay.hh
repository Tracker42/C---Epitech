/**
 *
 *
 *
 */

#ifndef AQMONITORDISPLAY_HH
#define	AQMONITORDISPLAY_HH

#include <QtCore>
#include <QtGui>

#include "../NCurses/IMonitorDisplay.hh"

class AQMonitorDisplay : public IMonitorDisplay, public QVBoxLayout {

public:
	AQMonitorDisplay();
	virtual ~AQMonitorDisplay();

	virtual void refresh() = 0;

};

#endif
