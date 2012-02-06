/**
 *
 *
 *
 */

#ifndef __KOALADOCTOR_H__
#define	__KOALADOCTOR_H__

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

#include "sickkoala.h"

class KoalaDoctor
{
private:
	std::string name;
	bool work;

	void speak(std::string message);

public:
	KoalaDoctor(std::string name);
	~KoalaDoctor();

	std::string getName();
	void diagnose(SickKoala* koala);
	void timeCheck();

};

#endif	/* KOALADOCTOR_H */

