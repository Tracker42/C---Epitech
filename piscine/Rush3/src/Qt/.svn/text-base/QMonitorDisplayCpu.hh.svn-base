/**
 *
 *
 *
 */

#ifndef __QMONITORDISPLAYCPU_HH__
#define	__QMONITORDISPLAYCPU_HH__

#include <QtCore>
#include <QtGui>

#include "../common/ModuleFactory.hh"
#include "AQMonitorDisplay.hh"

class QMonitorDisplayCpu : public AQMonitorDisplay {

	Q_OBJECT

protected:
	class QLoadCpu {
	protected:
		CpuCore * _core;

		QLabel * _left;
		QLabel * _right;
		QProgressBar * _load;

	public:
		QLoadCpu();
		~QLoadCpu();

		QLayout * create(CpuCore & core);

		void refresh();
	};

	MonitorModuleCpu * _module;

	QLabel * _name;
	QLabel * _cpu;
	QVector<QLoadCpu *> _cores;

public:
	QMonitorDisplayCpu();
	virtual ~QMonitorDisplayCpu();

	virtual bool initialize();
	virtual std::string getModuleName() const;

	void refresh();

};

#endif
