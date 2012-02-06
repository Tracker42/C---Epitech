/**
 *
 *
 *
 */

#include "QMonitorDisplayUser.hh"

QMonitorDisplayUser::QMonitorDisplayUser() {

}

QMonitorDisplayUser::~QMonitorDisplayUser() {

}

bool QMonitorDisplayUser::initialize() {
	module = (MonitorModuleUser *) ModuleFactory::getModule("USER");
	QHBoxLayout * layout = new QHBoxLayout();
	layout->addWidget(new QLabel(module->getUser().data()), 0, Qt::AlignLeft);
	layout->addWidget(new QLabel(module->getCompName().data()), 0, Qt::AlignCenter);
	layout->addWidget(new QLabel(module->getSysName().data()), 0, Qt::AlignRight);
	addLayout(layout);
	layout = new QHBoxLayout();
	layout->addWidget(new QLabel(module->getOs().data()));
	addLayout(layout);
	layout = new QHBoxLayout();
	layout->addWidget(new QLabel(module->getKernel().data()));
	addLayout(layout);
	layout = new QHBoxLayout();
	time = new QLabel();
	time->setText(QTime::currentTime().toString("hh:mm"));
	layout->addWidget(time, 0, Qt::AlignRight);
	addLayout(layout);
	return true;
}

std::string QMonitorDisplayUser::getModuleName() const {
	return "USER";
}

void QMonitorDisplayUser::refresh() {
	time->setText(QTime::currentTime().toString("hh:mm"));
}
