/**
 *
 *
 *
 */

#include "OneTime.h"

OneTime::OneTime(std::string key) {
	this->key = key;
	index = 0;
}

OneTime::~OneTime() {

}

void OneTime::encryptChar(char plainchar) {
	if (isalpha(plainchar)) {
		int base = plainchar > 96 ? 97 : 65;
		int kbase = key[index] > 96 ? 97 : 65;
		plainchar = (plainchar - base + (key[index] - kbase)) % 26 + base;
	}
	std::cout << plainchar;
	index = (index + 1) % key.size();
}

void OneTime::decryptChar(char cipherchar) {
	if (isalpha(cipherchar)) {
		int base = cipherchar > 96 ? 122 : 90;
		int kbase = key[index] > 96 ? 97 : 65;
		cipherchar = (cipherchar - base - (key[index] - kbase)) % 26 + base;
	}
	std::cout << cipherchar;
	index = (index + 1) % key.size();
}

void OneTime::reset() {
	index = 0;
}
