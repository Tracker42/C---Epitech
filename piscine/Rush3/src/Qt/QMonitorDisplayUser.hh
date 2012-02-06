/**
 *
 *
 *
 */

#ifndef __QMONITORDISPLAYUSER_HH__
#define	__QMONITORDISPLAYUSER_HH__

#include <QtCore>
#include <QtGui>

#include "AQMonitorDisplay.hh"
#include "../common/ModuleFactory.hh"

class QMonitorDisplayUser : public AQMonitorDisplay {
	Q_OBJECT

protected:
	MonitorModuleUser * module;
	QLabel * time;

public:
	QMonitorDisplayUser();
	virtual ~QMonitorDisplayUser();

	virtual bool initialize();
	virtual std::string getModuleName() const;

	void refresh();

};

#endif
