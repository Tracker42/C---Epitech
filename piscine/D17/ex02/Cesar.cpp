/**
 *
 *
 *
 */

#include "Cesar.h"

Cesar::Cesar() {
	reset();
}

Cesar::~Cesar() {

}

void Cesar::encryptChar(char plainchar) {
	if (isalpha(plainchar)) {
		int base = plainchar > 96 ? 97 : 65;
		plainchar = (plainchar - base + decallage) % 26 + base;
	}
	decallage = (decallage + 1) % 26;
	std::cout << plainchar;
}

void Cesar::decryptChar(char cipherchar) {
	if (isalpha(cipherchar)) {
		int base = cipherchar > 96 ? 122 : 90;
		cipherchar = (cipherchar - base - decallage) % 26 + base;
	}
	decallage = (decallage + 1) % 26;
	std::cout << cipherchar;
}

void Cesar::reset() {
	decallage = 3;
}
