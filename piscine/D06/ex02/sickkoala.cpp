/**
 *
 *
 *
 */

#include "sickkoala.h"

SickKoala::SickKoala(std::string name) {
	this->name = name;
}

SickKoala::~SickKoala() {
	this->speak("Kreooogg !! Je suis gueriiii !'");
}

std::string SickKoala::getName() {
	return this->name;
}

void SickKoala::speak(std::string message) {
	std::cout << "Mr." << this->name << ": " << message << std::endl;
}

void SickKoala::poke() {
	this->speak("Gooeeeeerrk !! :'(");
}

bool SickKoala::takeDrug(std::string drug) {
	if (drug.length() == 4 && (drug[0] | 0X20) == 'm' && (drug[1] | 0X20) == 'a' &&(drug[2] | 0X20) == 'r' &&(drug[3] | 0X20) == 's') {
		this->speak("Mars, et ca Kreog !");
	}
	else if (drug == "Buronzand") {
		this->speak("Et la fatigue a fait son temps !");
	}
	else {
		this->speak("Goerk !");
		return false;
	}
	return true;
}

void SickKoala::overDrive(std::string message) {
	int position;
	while ((position = message.find("Kreog !")) != std::string::npos) {
		message.replace(position, 7, "1337 !", 0, 6);
	}
	this->speak(message);
}
