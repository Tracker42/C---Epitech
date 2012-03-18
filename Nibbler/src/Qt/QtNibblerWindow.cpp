
#include "QtNibblerWindow.hh"

QtNibblerWindow::QtNibblerWindow(const QPoint & limit) {
	game = new QtGameTable(limit, this);
	hud = new QtHud(this);

	QWidget * central = new QWidget(this);
	QVBoxLayout * layout = new QVBoxLayout(central);
	layout->addWidget(game, 0, Qt::AlignJustify);
	layout->addWidget(hud, 0, Qt::AlignBottom);
	central->setLayout(layout);
	setCentralWidget(central);

	setFixedSize(limit.x() * NIBBLER_WIDTH + NIBBLER_MARGE, limit.y() * NIBBLER_HEIGHT + HUD_HEIGHT + NIBBLER_MARGE);
	setFocusPolicy(Qt::WheelFocus);
	setWindowTitle(NIBBLER_NAME);
}

QtNibblerWindow::~QtNibblerWindow() {

}

void QtNibblerWindow::update(const Snake & snake, const Food & food, int score) {
	game->update(snake, food);
	hud->update(score);
}

void QtNibblerWindow::showScore(int score) {
	QMessageBox::question(this, QString(NIBBLER_NAME), QString("Votre score : ") + QString::number(score) + QString(" points."));
}

void QtNibblerWindow::keyPressEvent(QKeyEvent * event) {
	NDirection dir = Model::STAY;
	switch (event->key()) {
		case Qt::Key_Left: dir = Model::LEFT;
			break;
		case Qt::Key_Up: dir = Model::UP;
			break;
		case Qt::Key_Right: dir = Model::RIGHT;
			break;
		case Qt::Key_Down: dir = Model::DOWN;
			break;
		default: QWidget::keyPressEvent(event);
			break;
	}
	if (dir != Model::STAY) {
		emit updateDirection(dir);
	}
}

void QtNibblerWindow::closeEvent(QCloseEvent * event) {
	event->ignore();
	emit close();
}
