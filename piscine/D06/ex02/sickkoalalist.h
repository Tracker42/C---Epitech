/**
 *
 *
 *
 */

#ifndef __SICKKOALALIST_H__
#define	__SICKKOALALIST_H__

#include <string>
#include <iostream>

#include "sickkoala.h"

class SickKoalaList
{
private:
	SickKoala *koala;
	SickKoalaList *next;

public:
	SickKoalaList(SickKoala *koala);
	~SickKoalaList();

	bool isEnd();
	void append(SickKoalaList *next);
	SickKoala *getFromName(std::string name);
	SickKoalaList *remove(SickKoalaList *remove);
	SickKoalaList *removeFromName(std::string remove);
	void dump();
	SickKoala *getItem();

};

#endif
