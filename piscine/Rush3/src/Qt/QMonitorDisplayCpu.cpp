/**
 *
 *
 *
 */

#include "QMonitorDisplayCpu.hh"

QMonitorDisplayCpu::QMonitorDisplayCpu() {
	_module = NULL;
	_name = NULL;
	_cpu = NULL;
}

QMonitorDisplayCpu::~QMonitorDisplayCpu() {
	if (_name) {
		delete _name;
	}
	if (_cpu) {
		delete _cpu;
	}
}

bool QMonitorDisplayCpu::initialize() {
	_module = (MonitorModuleCpu *) ModuleFactory::getModule("CPU");
	int i;
	QVBoxLayout * layout = new QVBoxLayout();
	QHBoxLayout * title = new QHBoxLayout();
	_name = new QLabel();
	_name->setText(QString("CPU"));
	title->addWidget(_name);
	_cpu = new QLabel();
	_cpu->setText(QString(_module->getCore(0).getName().data()));
	layout->addLayout(title);
	title->addWidget(_cpu);
	for(i = 0; i < _module->getNbCore(); i++) {
		QLoadCpu * core = new QLoadCpu();
		_cores.push_back(core);
		layout->addLayout(core->create(_module->getCore(i)));
	}
	this->addLayout(layout);
	return true;
}

std::string QMonitorDisplayCpu::getModuleName() const {
	return "CPU";
}

void QMonitorDisplayCpu::refresh() {
	QVector<QLoadCpu *>::iterator begin = _cores.begin();
	while (begin != _cores.end()) {
		(*begin)->refresh();
		begin++;
	}
}

QMonitorDisplayCpu::QLoadCpu::QLoadCpu() {
	_left = NULL;
	_right = NULL;
	_load = NULL;
}

QMonitorDisplayCpu::QLoadCpu::~QLoadCpu() {
	if (_left) {
		delete _left;
	}
	if (_right) {
		delete _right;
	}
	if (_load) {
		delete _load;
	}
}

QLayout * QMonitorDisplayCpu::QLoadCpu::create(CpuCore & core) {
	_core = &core;
	QString label("Proc ");
	label += QString::number(_core->getId());
	_left = new QLabel();
	_left->setText(label);
	_load = new QProgressBar();
	QHBoxLayout * layout = new QHBoxLayout();
	layout->addWidget(_left);
	layout->addWidget(_load);
	return layout;
}

void QMonitorDisplayCpu::QLoadCpu::refresh() {
	QString format(" %p% @ ");
	format += QString::number(_core->getFrequency() / 1000) + "GHz";
	_load->setFormat(format);
	_load->setValue(_core->getLoad());
}
