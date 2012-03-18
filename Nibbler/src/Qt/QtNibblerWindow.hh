/**
 *
 *
 *
 */

#ifndef __QTNIBBLERWINDOW_HH__
#define	__QTNIBBLERWINDOW_HH__

#include <QtCore>
#include <QtGui>

#include "Model.hh"
#include "Qt.hh"

#include "QtGameTable.hh"
#include "QtHud.hh"

class QtNibblerWindow : public QMainWindow {
	Q_OBJECT

protected:
	QtGameTable * game;
	QtHud * hud;

public:
	QtNibblerWindow(const QPoint & limit);
	virtual ~QtNibblerWindow();

	void update(const Snake & snake, const Food & food, int score);
	void keyPressEvent(QKeyEvent * event);
	void showScore(int score);
	void closeEvent(QCloseEvent* event);

signals:
	void updateDirection(NDirection);
	void close();



};

#endif
