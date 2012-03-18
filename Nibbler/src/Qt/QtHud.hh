/**
 *
 *
 *
 */

#ifndef __QTHUD_HH__
#define	__QTHUD_HH__

#include <QtCore>
#include <QtGui>

#include "Qt.hh"

class QtHud : public QWidget {
protected:
	QTime * begin;
	QLabel * score;
	QLabel * time;

public:
	QtHud(QWidget * parent);
	virtual ~QtHud();

	void update(int sc);

};

#endif
