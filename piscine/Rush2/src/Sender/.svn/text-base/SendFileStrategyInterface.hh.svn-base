/**
 *
 *
 *
 */

#ifndef __SENDFILESTRATEGYINTERFACE_H__
#define __SENDFILESTRATEGYINTERFACE_H__

#include <fstream>

class SendFileStrategyInterface {
protected:
	SendFileStrategyInterface() {}

public:
	virtual ~SendFileStrategyInterface() {}
	virtual std::fstream & getFile() = 0;
	virtual void eventStart() = 0;
	virtual void eventEnd() = 0;

};

#endif