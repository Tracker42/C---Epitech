/**
 *
 *
 *
 */

#ifndef __HOSPITAL_H__
#define	__HOSPITAL_H__

#include <string>
#include <iostream>
#include <sstream>

#include "sickkoala.h"
#include "koalanurse.h"
#include "koaladoctor.h"
#include "sickkoalalist.h"
#include "koalanurselist.h"
#include "koaladoctorlist.h"

class Hospital
{
private:

	SickKoalaList *koalas;
	KoalaNurseList *nurses;
	KoalaDoctorList *doctors;

	void action(std::string action);

public:
	Hospital();
	~Hospital();
	void addSick(SickKoalaList *koala);
	void addNurse(KoalaNurseList *nurse);
	void addDoctor(KoalaDoctorList *doctor);

	void run();

};

#endif

