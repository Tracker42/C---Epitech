/**
 *
 *
 *
 */

#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial) {
	m_x = x;
	m_y = y;
	m_serial = serial;
	next = 0;
	std::cout << "KreogCom " << m_serial << " initialised" << std::endl;
}

KreogCom::~KreogCom() {
	std::cout << "KreogCon " << m_serial << " shutting down" << std::endl;
}

void KreogCom::addCom(int x, int y, int serial) {
	KreogCom *next = new KreogCom(x, y, serial);
	next->next = this->next;
	this->next = next;
}

KreogCom *KreogCom::getCom() {
	return next;
}

void KreogCom::removeCom() {
	KreogCom *del;
	if (next) {
		del = next;
		next = next->next;
		delete del;
	}
}

void KreogCom::ping() const {
	std::cout << "KreogCom " << m_serial << " currently at " << m_x << " " << m_y << std::endl;
}

void KreogCom::locateSquad() const {
	if (next) {
		next->locateSquad();
	}
	ping();
}
