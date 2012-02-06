/**
 *
 *
 *
 */

#ifndef __CESAR_H__
#define	__CESAR_H__

#include <iostream>

#include "IEncryptionMethod.h"

class Cesar : public IEncryptionMethod {
protected:
	int decallage;

public:
	Cesar();
	virtual ~Cesar();

	virtual void encryptChar(char plainchar);
	virtual void decryptChar(char cipherchar);
	virtual void reset();

};

#endif
