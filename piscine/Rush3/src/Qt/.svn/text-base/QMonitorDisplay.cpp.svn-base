/**
 *
 *
 *
 */

#include "QMonitorDisplay.hh"

QMonitorDisplay::QMonitorDisplay(int argc, char **argv) {
	app = new QApplication(argc, argv);
	window = new QMainWindow();
	QVBoxLayout * layout = new QVBoxLayout();

	AQMonitorDisplay * monitor = new QMonitorDisplayCpu();
	monitor->initialize();
	layout->addLayout(monitor);
	monitors.push_back(monitor);

	monitor = new QMonitorDisplayUser();
	monitor->initialize();
	layout->addLayout(monitor);
	monitors.push_back(monitor);

	QWidget * widget = new QWidget();
	widget->setLayout(layout);
	window->setCentralWidget(widget);
	timer = new QTimer();
	timer->setInterval(1000);
	timer->start();
	QObject::connect(timer, SIGNAL(timeout()), this, SLOT(refresh()));
	window->show();
	app->exec();
}

QMonitorDisplay::~QMonitorDisplay() {

}

void QMonitorDisplay::refresh() {
	QVector<AQMonitorDisplay *>::iterator iterator = monitors.begin();
	while (iterator != monitors.end()) {
		(*iterator)->refresh();
		iterator++;
	}
}
