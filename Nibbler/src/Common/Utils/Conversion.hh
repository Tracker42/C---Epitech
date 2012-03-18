/**
 *
 *
 *
 */

#ifndef __CONVERSION_HH__
#define	__CONVERSION_HH__

#include <string>
#include <sstream>

template<typename T>
class Conversion {
public:

	static T toValue(const std::string & text) {
		T value;
		std::stringstream ss;
		ss.str(text);
		ss >> value;
		return value;
	}

	static std::string toString(T value) {
		std::stringstream ss;
		ss << value;
		return ss.str();
	}

};

#endif
