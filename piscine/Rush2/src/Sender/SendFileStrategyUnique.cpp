/**
 *
 *
 *
 */

#include "SendFileStrategyUnique.hh"

SendFileStrategyUnique::SendFileStrategyUnique()
: file(NULL), baseFileName("sender"), extension("txt"), count(0) {

}

SendFileStrategyUnique::~SendFileStrategyUnique() {

}

std::string const & SendFileStrategyUnique::getBaseFileName() const {
	return baseFileName;
}

std::string const & SendFileStrategyUnique::getExtension() const {
	return extension;
}

int SendFileStrategyUnique::getCount() const {
	return count;
}

void SendFileStrategyUnique::setBaseFileName(std::string & baseFileName) {
	this->baseFileName = baseFileName;
}

void SendFileStrategyUnique::setExtension(std::string & extension) {
	this->extension = extension;
}

std::fstream & SendFileStrategyUnique::getFile() {
	std::ostringstream os;
	os << baseFileName << count++ << "." << extension;
	file = new std::fstream(os.str().data(), std::ios::out | std::ios::trunc);
	if (!file->is_open()) {
		//throw SenderException();
	}
	return *file;
}

void SendFileStrategyUnique::eventStart() {

}

void SendFileStrategyUnique::eventEnd() {
	file->flush();
	file->close();
	delete file;
}
