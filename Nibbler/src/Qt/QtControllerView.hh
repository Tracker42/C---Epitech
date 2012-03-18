/**
 *
 *
 *
 */

#ifndef __QTCONTROLLERVIEW_HH__
#define	__QTCONTROLLERVIEW_HH__

#include <QtCore>
#include <QtGui>

#include "Controllers.hh"
#include "QtNibblerWindow.hh"

class QtControllerView : public QObject, public ControllerViewInterface {
	Q_OBJECT

protected:
	ControllerModelInterface * controllerModel;
	QtNibblerWindow * window;

public:
	QtControllerView(int argc, char **argv);
	virtual ~QtControllerView();

	virtual bool init(ControllerModelInterface * controllerModel);
	virtual bool update();
	virtual void quit(NQuit quit);

public slots:
	void close();
	void updateDirection(NDirection direction);
};

#endif
