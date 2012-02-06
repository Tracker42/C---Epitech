/**
 *
 *
 *
 */

#ifndef __SENDMANAGER_H__
#define __SENDMANAGER_H__

#include <string>

#include "SendInterface.hh"

class SendManager {
protected:
	static SendManager * instance;
	SendInterface * sender;

	SendManager();
public:
	~SendManager();
	void registerSender(SendInterface *sender);
	bool send(std::string & message);

	static SendManager * getInstance();
	static void destroy();

};

#endif
