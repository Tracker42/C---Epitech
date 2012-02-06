/**
 *
 *
 *
 */

#include "SendManager.hh"
#include <iostream>

SendManager *SendManager::instance = NULL;

SendManager::SendManager()
: sender(NULL) {

}

SendManager::~SendManager() {
	if (sender) {
		delete sender;
	}
}

void SendManager::registerSender(SendInterface* sender) {
	if (this->sender) {
		delete this->sender;
	}
	this->sender = sender;
}

bool SendManager::send(std::string & message) {
	if (sender) {
		return sender->send(message);
	}
	return false;
}

SendManager * SendManager::getInstance() {
	if (!SendManager::instance) {
		SendManager::instance = new SendManager();
	}
	return SendManager::instance;
}

void SendManager::destroy() {
	if (SendManager::instance) {
		delete SendManager::instance;
	}
}
