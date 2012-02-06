/**
 *
 *
 *
 */

#ifndef __KOALANURSELIST_H__
#define	__KOALANURSELIST_H__

#include <string>
#include <iostream>

#include "koalanurse.h"

class KoalaNurseList
{
private:
	KoalaNurse *nurse;
	KoalaNurseList *next;

public:
	KoalaNurseList(KoalaNurse *koala);
	~KoalaNurseList();

	bool isEnd();
	void append(KoalaNurseList *next);
	KoalaNurse *getFromID(int id);
	KoalaNurseList *remove(KoalaNurseList *remove);
	KoalaNurseList *removeFromID(int remove);
	void dump();
	KoalaNurse *getItem();

};

#endif
