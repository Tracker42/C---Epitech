/**
 *
 *
 *
 */

#ifndef __LOGGER_H__
#define __LOGGER_H__

#include <string>
#include <iostream>

class Logger {
protected:
	Logger() {}
	~Logger() {}

public:
	static void error(std::string message);
	static void log(std::string message);
	static void speak(std::string message);

};

#endif
