/**
 *
 *
 *
 */

#include "koaladoctorlist.h"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor* doctor) {
	this->doctor = doctor;
	this->next = NULL;
}

KoalaDoctorList::~KoalaDoctorList() {

}

bool KoalaDoctorList::isEnd() {
	return !(bool) this->next;
}

void KoalaDoctorList::append(KoalaDoctorList* next) {
	if (this->isEnd()) {
		this->next = next;
	}
	else {
		this->next->append(next);
	}
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string name) {
	if (this->doctor && this->doctor->getName() == name) {
		return this->doctor;
	}
	else if (this->next) {
		return this->next->getFromName(name);
	}
	return NULL;
}

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList* remove) {
	KoalaDoctorList *current = this;
	KoalaDoctorList *previous = NULL;
	while (current) {
		if (current == remove) {
			if (previous) {
				previous->next = current->next;
				current->next = NULL;
				return this;
			}
			else {
				previous = current->next;
				current->next = NULL;
				return previous;
			}
		}
		previous = current;
		current = current->next;
	}
	return NULL;
}

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string remove) {
	KoalaDoctorList *current = this;
	KoalaDoctorList *previous = NULL;
	while (current) {
		if (current && current->doctor && current->doctor->getName() == remove) {
			if (previous) {
				previous->next = current->next;
				current->next = NULL;
				return this;
			}
			else {
				previous = current->next;
				current->next = NULL;
				return previous;
			}
		}
		previous = current;
		current = current->next;
	}
	return NULL;
}

void KoalaDoctorList::dump() {
	std::cout << "Liste des medecins : ";
	KoalaDoctorList *current = this;
	while (current) {
		if (current->doctor) {
			std::cout << current->doctor->getName();
		}
		else {
			std::cout << "NULL";
		}
		if (current->next) {
			std::cout << ", ";
		}
		else {
			std::cout << "." << std::endl;
		}
		current = current->next;
	}
}

KoalaDoctor *KoalaDoctorList::getItem() {
	return this->doctor;
}
