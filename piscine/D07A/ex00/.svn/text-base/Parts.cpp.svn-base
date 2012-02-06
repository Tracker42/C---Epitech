/**
 *
 *
 *
 */

#include "Parts.h"

/******************************************************************************/

Arms::Arms(std::string serial, bool functionnal) {
	_serial = serial;
	_functionnal = functionnal;
}

std::string Arms::serial() const {
	return _serial;
}

bool Arms::isFunctionnal() const {
	return _functionnal;
}

void Arms::informations() const {
	std::cout << "\t[Parts] Arms " << _serial << " status : " << (_functionnal ? "OK" : "KO") << std::endl;
}

/******************************************************************************/

Legs::Legs(std::string serial, bool functionnal) {
	_serial = serial;
	_functionnal = functionnal;
}

std::string Legs::serial() const {
	return _serial;
}

bool Legs::isFunctionnal() const {
	return _functionnal;
}

void Legs::informations() const {
	std::cout << "[Parts] Legs " << _serial << " status : " << (_functionnal ? "OK" : "KO") << std::endl;
}

/******************************************************************************/

Head::Head(std::string serial, bool functionnal) {
	_serial = serial;
	_functionnal = functionnal;
}

std::string Head::serial() const {
	return _serial;
}

bool Head::isFunctionnal() const {
	return _functionnal;
}

void Head::informations() const {
	std::cout << "[Parts] Head " << _serial << " status : " << (_functionnal ? "OK" : "KO") << std::endl;
}

/******************************************************************************/
