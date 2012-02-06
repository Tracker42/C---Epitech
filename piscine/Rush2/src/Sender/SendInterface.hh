/**
 *
 *
 *
 */

#ifndef __SENDINTERFACE_H__
#define __SENDINTERFACE_H__

#include <string>

class SendInterface {
protected:
	SendInterface() {}

public:
	virtual ~SendInterface() {}

	virtual bool send(std::string & message) = 0;

};

#endif
