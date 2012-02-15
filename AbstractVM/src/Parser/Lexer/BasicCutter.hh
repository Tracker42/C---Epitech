/**
 *
 *
 *
 */

#ifndef __BASICCUTTER_HH__
#define	__BASICCUTTER_HH__

#include <string>

#include "CutterInterface.hh"

class BasicCutter : public CutterInterface {
protected:
	std::string pattern;

public:
	BasicCutter(std::string pattern);
	virtual ~BasicCutter();

	size_t next(const std::string & line);
	virtual std::string cut(std::string & line);

};

#endif
