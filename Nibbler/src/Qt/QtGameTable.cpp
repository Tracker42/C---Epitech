
#include "QtGameTable.hh"

QtGameTable::QtGameTable(const QPoint & limit, QWidget * parent)
: QWidget(parent), limit(limit) {
	head = new QPixmap(RES_HEAD);
	core = new QPixmap(RES_CORE);
	apple = new QPixmap(RES_APPLE);
	setFixedSize(limit.x() * NIBBLER_WIDTH + 1, limit.y() * NIBBLER_HEIGHT + 1);
}

QtGameTable::~QtGameTable() {

}

void QtGameTable::update(const Snake & snake, const Food & food) {
	this->snake = &snake;
	this->food = &food;
	repaint();
}

void QtGameTable::paintEvent(QPaintEvent * event) {
	QPainter painter(this);
	painter.drawLine(0, 0, limit.x() * NIBBLER_WIDTH, 0);
	painter.drawLine(0, 0, 0, limit.y() * NIBBLER_HEIGHT);
	painter.drawLine(limit.x() * NIBBLER_WIDTH, 0, limit.x() * NIBBLER_WIDTH, limit.y() * NIBBLER_HEIGHT);
	painter.drawLine(0, limit.y() * NIBBLER_HEIGHT, limit.x() * NIBBLER_WIDTH, limit.y() * NIBBLER_HEIGHT);
	painter.drawPixmap(QPoint(food->getX() * NIBBLER_WIDTH, food->getY() * NIBBLER_HEIGHT), *apple);
	painter.drawPixmap(QPoint(snake->head().getX() * NIBBLER_WIDTH, snake->head().getY() * NIBBLER_HEIGHT), *head);
	int i = 1;
	while (i < snake->getSize()) {
		const Element & element = (*snake)[i];
		QPoint point(element.getX() * NIBBLER_WIDTH, element.getY() * NIBBLER_HEIGHT);
		painter.drawPixmap(point, *core);
		i++;
	}
	(void) event;
}
