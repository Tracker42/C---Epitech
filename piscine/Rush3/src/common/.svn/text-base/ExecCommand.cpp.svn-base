/**
 *
 *
 *
 */

#include "ExecCommand.hh"

ExecCommand::ExecCommand() {

}

ExecCommand::~ExecCommand() {

}

std::string ExecCommand::exec(std::string command) {
	command += " > /tmp/tmp.rush";
	if (system(command.data()) < 0) {
		return std::string("");
	}
	std::fstream file("/tmp/tmp.rush");
	if (file.is_open()) {
		std::stringstream ss;
		ss << file.rdbuf();
		file.close();
		remove("/tmp/tmp.rush");
		return ss.str();
	}
	return std::string("");
}
