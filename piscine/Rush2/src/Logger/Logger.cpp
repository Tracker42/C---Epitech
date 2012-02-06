/**
 *
 *
 *
 */

#include "Logger.hh"

void Logger::log(std::string message) {
	std::cout << "log - " << message << std::endl;
}

void Logger::error(std::string message) {
	std::cerr << "error - " << message << std::endl;
}

void Logger::speak(std::string message) {
	std::cout << message << std::endl;
}
