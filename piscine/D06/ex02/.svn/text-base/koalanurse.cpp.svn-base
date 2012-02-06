/**
 *
 *
 *
 */

#include "koalanurse.h"

KoalaNurse::KoalaNurse(int id) {
	this->id = id;
	this->work = false;
}

KoalaNurse::~KoalaNurse() {
	this->speak("Enfin un peu de repos !");
}

int KoalaNurse::getID() {
	return this->id;
}

void KoalaNurse::speak(std::string message) {
	std::cout << "Nurse " << this->id << ": " << message << std::endl;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala* koala) {
	koala->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string report) {
	int position = report.find(".report");
	std::fstream file(report.data(), std::ios::in);
	std::string koala("");
	std::string drug;
	if (position != (int) std::string::npos && report.substr(position).compare(".report") == 0 && file.is_open()) {
		char buffer[100];
		buffer[file.readsome(buffer, 100)] = 0;
		drug = buffer;
		koala = report.substr(0, position);
		this->speak(std::string("Kreog ! Il faut donner un ") + drug + " a Mr." + koala + " !");
	}
	file.close();
	return drug;
}

void KoalaNurse::timeCheck() {
	if (this->work) {
		this->speak("Je rentre dans ma foret d'eucalyptus !");
	}
	else {
		this->speak("Je commence le travail !");
	}
	this->work = !this->work;
}
