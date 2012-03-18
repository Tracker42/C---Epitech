/**
 *
 *
 *
 */

#ifndef __QTGAMETABLE_HH__
#define	__QTGAMETABLE_HH__

#include <QtCore>
#include <QtGui>

#include "Qt.hh"

class QtGameTable : public QWidget {
protected:
	QPixmap * head;
	QPixmap * core;
	QPixmap * apple;
	QPoint limit;

	const Snake * snake;
	const Food * food;

public:
	QtGameTable(const QPoint & limit, QWidget * parent);
	virtual ~QtGameTable();

	void update(const Snake & snake, const Food & food);
	void paintEvent(QPaintEvent * event);
};

#endif
