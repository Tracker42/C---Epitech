/**
 *
 *
 *
 */

#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name) {
	this->name = name;
	this->work = false;
	this->speak(std::string("Je suis le Dr.") + this->name + " ! Comment Kreoggez-vous ?");
}

KoalaDoctor::~KoalaDoctor() {

}

std::string KoalaDoctor::getName() {
	return this->name;
}

void KoalaDoctor::speak(std::string message) {
	std::cout << "Dr." << this->name << ": " << message << std::endl;
}

void KoalaDoctor::diagnose(SickKoala* koala) {
	this->speak(std::string("Alors, qu'est-ce qui vous goerk, Mr.") + koala->getName() + " ?");
	koala->poke();
	std::string filename = koala->getName() + ".report";
	std::fstream report(filename.data(), std::fstream::out | std::fstream::trunc);
	if (report) {
		std::string drugs[5] = {
			"mars",
			"Buronzand",
			"Viagra",
			"Extasy",
			"Feuille d'eucalyptus"
		};
		std::string drug = drugs[random() % 5].data();
		report.write(drug.data(), drug.length());
		report.close();
	}
}

void KoalaDoctor::timeCheck() {
	if (this->work) {
		this->speak("Je rentre dans ma foret d'eucalyptus !");
	}
	else {
		this->speak("Je commence le travail !");
	}
	this->work = !this->work;
}
