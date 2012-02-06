/**
 *
 *
 *
 */

#ifndef __SENDFILESTRATEGYUNIQUE_H__
#define __SENDFILESTRATEGYUNIQUE_H__

#include <string>
#include <fstream>
#include <sstream>

#include "SendFileStrategyInterface.hh"

class SendFileStrategyUnique : public SendFileStrategyInterface {
protected:
	std::fstream * file;
	std::string baseFileName;
	std::string extension;
	int count;

public:
	SendFileStrategyUnique();
	~SendFileStrategyUnique();

	std::string const & getBaseFileName() const;
	std::string const & getExtension() const;
	int getCount() const;
	void setBaseFileName(std::string & baseFileName);
	void setExtension(std::string & extension);

	virtual std::fstream & getFile();
	virtual void eventStart();
	virtual void eventEnd();

};

#endif
