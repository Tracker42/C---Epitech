/**
 *
 *
 *
 */

#ifndef __SENDTERM_H__
#define __SENDTERM_H__

#include <string>
#include <iostream>

#include "SendInterface.hh"

class SendTerm : public SendInterface {
protected:
	std::ostream * out;

public:
	SendTerm();
	virtual ~SendTerm();

	void setOStream(std::ostream * out);
	virtual bool send(std::string & message);
};

#endif
