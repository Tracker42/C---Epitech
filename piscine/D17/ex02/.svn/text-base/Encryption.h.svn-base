/**
 *
 *
 *
 */

#ifndef __ENCRYPTION_H__
#define	__ENCRYPTION_H__

#include <string>
#include <iostream>
#include <algorithm>

#include "IEncryptionMethod.h"

typedef void (IEncryptionMethod::*IEMethod)(char c);

class Encryption {
protected:
	IEncryptionMethod * instance;
	IEMethod method;

public:
	Encryption(IEncryptionMethod & instance, IEMethod method);
	virtual ~Encryption();

	void operator()(char c);

	static void encryptString(IEncryptionMethod & encryptionMethod, std::string const & toEncrypt);
	static void decryptString(IEncryptionMethod & encryptionMethod, std::string const & toDecrypt);

};

#endif
