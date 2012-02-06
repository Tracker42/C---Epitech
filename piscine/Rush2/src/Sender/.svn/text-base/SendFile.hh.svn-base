/**
 *
 *
 *
 */

#ifndef __SENDFILE_H__
#define __SENDFILE_H__

#include <string>
#include <fstream>

#include "SendInterface.hh"
#include "SendFileStrategyInterface.hh"

class SendFile : public SendInterface {
protected:
	SendFileStrategyInterface * strategy;

public:
	SendFile();
	~SendFile();

	void setStrategy(SendFileStrategyInterface * strategy);
	virtual bool send(std::string & message);
};

#endif
