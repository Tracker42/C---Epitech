/**
 *
 *
 *
 */

#ifndef __CUTTERINTERFACE_HH__
#define	__CUTTERINTERFACE_HH__

#include <string>

class CutterInterface {
protected:

public:
	virtual size_t next(const std::string & line) = 0;
	virtual std::string cut(std::string & line) = 0;

};

#endif
