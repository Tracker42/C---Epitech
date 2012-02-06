/**
 *
 *
 *
 */

#include "Skat.h"

Skat::Skat(std::string const& name, int& stimPacks) : _name(name), _stimPacks(stimPacks) {

}

Skat::~Skat() {

}

int& Skat::stimPaks() {
	return _stimPacks;
}

std::string const& Skat::name() {
	return _name;
}

void Skat::shareStimPaks(int number, int& stock) {
	if (number <= _stimPacks) {
		stock += number;
		_stimPacks -= number;
		std::cout << "Keep the change." << std::endl;
	}
	else {
		std::cout << "Don’t be greedy" << std::endl;
	}
}

void Skat::addStimPaks(unsigned int number) {
	if (!_stimPacks) {
		std::cout << "Hey boya, did you forget something ?" << std::endl;
	}
	_stimPacks += number;
}

void Skat::useStimPaks() {
	if (_stimPacks > 0) {
		_stimPacks--;
		std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
	}
	else {
		std::cout << "Mediiiiiic" << std::endl;
	}
}

void Skat::status() const {
	std::cout << "Soldier " << _name << " reporting " << _stimPacks << " stimpaks remaining sir !" << std::endl;
}
