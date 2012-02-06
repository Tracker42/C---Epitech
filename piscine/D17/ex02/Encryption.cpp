/**
 *
 *
 *
 */

#include "Encryption.h"

Encryption::Encryption(IEncryptionMethod & instance, IEMethod method) {
	this->instance = &instance;
	this->method = method;
}

Encryption::~Encryption() {

}

void Encryption::operator ()(char c) {
	(instance->*method)(c);
}

void Encryption::encryptString(IEncryptionMethod& encryptionMethod, std::string const & toEncrypt) {
	encryptionMethod.reset();
	std::for_each(toEncrypt.begin(), toEncrypt.end(), Encryption(encryptionMethod, &IEncryptionMethod::encryptChar));
	std::cout << std::endl;
}

void Encryption::decryptString(IEncryptionMethod& encryptionMethod, std::string const & toDecrypt) {
	encryptionMethod.reset();
	std::for_each(toDecrypt.begin(), toDecrypt.end(), Encryption(encryptionMethod, &IEncryptionMethod::decryptChar));
	std::cout << std::endl;
}
