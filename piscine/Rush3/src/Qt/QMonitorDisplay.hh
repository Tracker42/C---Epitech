/**
 *
 *
 *
 */

#ifndef __QMONITORDISPLAY_HH__
#define	__QMONITORDISPLAY_HH__

#include <QtCore>
#include <QtGui>

#include "AQMonitorDisplay.hh"
#include "QMonitorDisplayCpu.hh"
#include "QMonitorDisplayUser.hh"

class QMonitorDisplay : public QObject {
	Q_OBJECT

protected:
	QApplication * app;
	QMainWindow * window;
	QTimer * timer;

	QVector<AQMonitorDisplay *> monitors;

public:
	QMonitorDisplay(int argc, char **argv);
	virtual ~QMonitorDisplay();

public slots:
	void refresh();

};

#endif
