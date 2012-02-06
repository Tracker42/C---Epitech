/**
 *
 *
 *
 */

#ifndef __KOALANURSE_H__
#define __KOALANURSE_H__

#include <string>
#include <iostream>
#include <fstream>

#include "sickkoala.h"

class KoalaNurse
{
private:
	int id;
	bool work;

	void speak(std::string message);

public:
	KoalaNurse(int id);
	~KoalaNurse();

	int getID();
	void giveDrug(std::string drug, SickKoala * koala);
	std::string readReport(std::string report);
	void timeCheck();

};

#endif
