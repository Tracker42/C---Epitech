/**
 *
 *
 *
 */

#include "koalanurselist.h"

KoalaNurseList::KoalaNurseList(KoalaNurse* nurse) {
	this->nurse = nurse;
	this->next = NULL;
}

KoalaNurseList::~KoalaNurseList() {

}

bool KoalaNurseList::isEnd() {
	return !(bool) this->next;
}

void KoalaNurseList::append(KoalaNurseList* next) {
	if (this->isEnd()) {
		this->next = next;
	}
	else {
		this->next->append(next);
	}
}

KoalaNurse *KoalaNurseList::getFromID(int id) {
	if (this->nurse && this->nurse->getID() == id) {
		return this->nurse;
	}
	else if (this->next) {
		return this->next->getFromID(id);
	}
	return NULL;
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList* remove) {
	KoalaNurseList *current = this;
	KoalaNurseList *previous = NULL;
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

KoalaNurseList *KoalaNurseList::removeFromID(int remove) {
	KoalaNurseList *current = this;
	KoalaNurseList *previous = NULL;
	while (current) {
		if (current && current->nurse && current->nurse->getID() == remove) {
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

void KoalaNurseList::dump() {
	std::cout << "Liste des infirmieres : ";
	KoalaNurseList *current = this;
	while (current) {
		if (current->nurse) {
			std::cout << current->nurse->getID();
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

KoalaNurse *KoalaNurseList::getItem() {
	return this->nurse;
}
