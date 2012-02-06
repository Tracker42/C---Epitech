/**
 *
 *
 *
 */

#include "SendFile.hh"

SendFile::SendFile()
: strategy(NULL) {

}

SendFile::~SendFile() {

}

void SendFile::setStrategy(SendFileStrategyInterface* strategy) {
	if (strategy) {
		delete this->strategy;
	}
	this->strategy = strategy;
}

bool SendFile::send(std::string& message) {
	if (strategy) {
		std::fstream & file = strategy->getFile();
		strategy->eventStart();
		file << message;
		strategy->eventEnd();
		return true;
	}
	return false;
}
