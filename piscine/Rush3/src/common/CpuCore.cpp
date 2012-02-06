/**
 *
 *
 *
 */

#include "CpuCore.hh"
#include "ExecCommand.hh"

int CpuCore::delay_load = 1;
int CpuCore::delay_frequency = 5;

CpuCore::CpuCore(int id) {
	_id = id;
	_load_old = 0;
	_idle_old = 0;
	_load = 0;
	_time_load = 0;
	_time_frequency = 0;
	initialize();
}

CpuCore::~CpuCore() {

}

void CpuCore::initialize() {
	std::string name = ExecCommand::exec(CCORE_CLI_CORENAME);
	if (!name.empty()) {
		size_t pos = name.find(":");
		if (pos != std::string::npos) {
			_name = name.substr(pos + 1, name.find("\n") - pos);
		}
	}
}

int CpuCore::getId() const {
	return _id;
}

std::string CpuCore::getName() const {
	return _name;
}

float CpuCore::getLoad() {
	if (time(0) > _time_load + delay_load) {
		int idle;
		std::stringstream ss;
		ss << ExecCommand::exec(std::string(CCORE_CLI_LOAD) + ((char) (_id + 48)));
		int a, b, c, d, e, f, g, h, i, j;
		char null[4];
		ss.read(null, 4);
		ss >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
		a = a + b + c + d + e + f + g + h + i + j;
		idle = d;
		int diff_idle = idle - _idle_old;
		int diff_total = a - _load_old;
		_load = (1000 * (diff_total - diff_idle) / diff_total + 5) / 10;
		_load_old = diff_total;
		_idle_old = diff_idle;
		_time_load = time(0);
	}
	return _load;
}

float CpuCore::getFrequency() {
	if (time(0) > _time_frequency + delay_frequency) {
		std::string frequencies = ExecCommand::exec(CCORE_CLI_FREQUENCY);
		int i;
		int pos = 0;
		for (i = 0; i < _id; i++) {
			pos = frequencies.find("\n", pos + 1);
		}
		pos = frequencies.find(":", pos + 1);
		std::string frequency = frequencies.substr(pos + 1, frequencies.find("\n", pos + 1));
		std::stringstream ss;
		ss << frequency;
		ss >> _frequency;
		_time_frequency = time(0);
	}
	return _frequency;
}
