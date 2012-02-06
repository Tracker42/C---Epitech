/**
 *
 *
 *
 */

#include <iostream>
#include <string>

#include "ex02/sickkoala.h"
#include "ex02/koalanurse.h"
#include "ex02/koaladoctor.h"
#include "ex02/sickkoalalist.h"
#include "ex02/koalanurselist.h"
#include "ex02/koaladoctorlist.h"
#include "ex02/hopital.h"

using namespace std;

int main() {

//	SickKoala koala("Koala");
//	KoalaNurse nurse(6);
//	KoalaDoctor doctor("Doctor");
//
//
//	cout << "Poke : ";
//	koala.poke();
//
//	cout << "Drug (mars) : ";
//	koala.takeDrug("mars");
//
//	cout << "Drug (Buronzand) : ";
//	koala.takeDrug("Buronzand");
//
//	cout << "Drug (truc bizare) : ";
//	koala.takeDrug("truc bizare");
//
//	cout << "OverDrive : ";
//	koala.overDrive("Kreog ! Ahhh!! Ahhh!! Kreog !");
//
//	cout << "Work : ";
//	nurse.timeCheck();
//
//	cout << "Give (mars) : ";
//	nurse.giveDrug("mars", &koala);
//
//	cout << "Work : ";
//	doctor.timeCheck();
//
//	cout << "Diagnose : ";
//	doctor.diagnose(&koala);
//
//	cout << "Raport : ";
//	nurse.readReport("Koala.report");
//
//	SickKoala plout("Plout");
//	SickKoalaList head(&koala);
//	SickKoalaList second(NULL);
//	SickKoalaList tail(&plout);
//	head.append(&second);
//	head.append(&tail);
//
//	cout << head.getFromName("Koala")->getName() << std::endl;
//	cout << head.getFromName("Plout")->getName() << std::endl;
//
//	head.dump();
//	cout << (&second == head.remove(&head)) << endl;
//	head.remove(&tail)->dump();


	cout << endl;
	srandom(42);
	KoalaDoctor cox("Cox");
	KoalaDoctor house("House");
	KoalaDoctor tired("Boudur-Oulot");
	KoalaDoctorList doc1(&cox);
	KoalaDoctorList doc2(&house);
	KoalaDoctorList doc3(&tired);
	KoalaNurse a(1);
	KoalaNurse b(2);
	KoalaNurseList nurse1(&a);
	KoalaNurseList nurse2(&b);
	SickKoala cancer("Ganepar");
	SickKoala gangrene("Scarface");
	SickKoala rougeole("RedFace");
	SickKoala variole("Varia");
	SickKoala fracture("Falter");
	SickKoalaList sick1(&cancer);
	SickKoalaList sick2(&gangrene);
	SickKoalaList sick3(&rougeole);
	SickKoalaList sick4(&variole);
	SickKoalaList sick5(&fracture);
	{
		Hospital stAnne;
		stAnne.addDoctor(&doc1);
		stAnne.addDoctor(&doc2);
		stAnne.addDoctor(&doc3);
		stAnne.addSick(&sick1);
		stAnne.addSick(&sick2);
		stAnne.addSick(&sick3);
		stAnne.addSick(&sick4);
		stAnne.addSick(&sick5);
		stAnne.addNurse(&nurse1);
		stAnne.addNurse(&nurse2);
		stAnne.addSick(&sick4);
		stAnne.run();
	}
	if (nurse1.isEnd() && sick1.isEnd() && doc1.isEnd())
		std::cout << "Lists cleaned up." << std::endl;
	else
		std::cerr << "You fail ! Boo !" << std::endl;

	return 0;
}
