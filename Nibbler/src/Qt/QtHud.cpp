
#include "QtHud.hh"

QtHud::QtHud(QWidget * parent)
: QWidget(parent) {
	score = new QLabel();
	time = new QLabel();

	QHBoxLayout * layout = new QHBoxLayout();
	layout->addWidget(new QLabel(QString("SCORE")));
	layout->addWidget(score);
	layout->addWidget(time, 0, Qt::AlignRight);
	setLayout(layout);

	setFixedHeight(HUD_HEIGHT);
}

QtHud::~QtHud() {

}

void QtHud::update(int sc) {
	time->setText(QString("00:00"));
	score->setText(QString::number(sc));
}
