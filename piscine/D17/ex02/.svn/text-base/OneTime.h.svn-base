/**
 *
 *
 *
 */

#ifndef __ONETIME_H__
#define	__ONETIME_H__

#include <string>
#include <iostream>

#include "IEncryptionMethod.h"

class OneTime : public IEncryptionMethod {
protected:
	std::string key;
	int index;

public:
	OneTime(std::string key);
	virtual ~OneTime();

	virtual void encryptChar(char plainchar);
	virtual void decryptChar(char cipherchar);
	virtual void reset();

};

#endif
