/**
 *
 *
 *
 */

#ifndef __KOALADOCTORLIST_H__
#define	__KOALADOCTORLIST_H__

#include <string>
#include <iostream>

#include "koaladoctor.h"

class KoalaDoctorList
{
private:
	KoalaDoctor *doctor;
	KoalaDoctorList *next;

public:
	KoalaDoctorList(KoalaDoctor *doctor);
	~KoalaDoctorList();

	bool isEnd();
	void append(KoalaDoctorList *next);
	KoalaDoctor *getFromName(std::string name);
	KoalaDoctorList *remove(KoalaDoctorList *remove);
	KoalaDoctorList *removeFromName(std::string remove);
	void dump();
	KoalaDoctor *getItem();

};

#endif
