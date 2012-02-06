/**
 *
 *
 *
 */

#include "Borg.hh"

/******************************************************************************/
		/************/
		/*Borg::Ship*/
		/************/
/******************************************************************************/

Borg::Ship::Ship(int weaponFrequency, short repair) {
	_side = 3000;
	_maxWarp = 9;
	_home = UNICOMPLEX;
	_location = _home;
	_shield = 100;
	_weaponFrequency = weaponFrequency;
	_repair = repair;
	std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
	std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
	std::cout << "Resistance is futile." << std::endl;
}

Borg::Ship::~Ship() {

}

void Borg::Ship::speak(std::string message) {
	std::cout << message << std::endl;
}

int Borg::Ship::getSide() {
	return _side;
}

short Borg::Ship::getMaxWarp() {
	return _maxWarp;
}

WarpSystem::Core *Borg::Ship::getCore() {
	return _core;
}

bool Borg::Ship::isStable() {
	if (getCore()) {
		return getCore()->isStable();
	}
	return false;
}

Destination Borg::Ship::getLocation() {
	return _location;
}

Destination Borg::Ship::getHome() {
	return _home;
}

int Borg::Ship::getShield() {
	return _shield;
}

int Borg::Ship::getWeaponFrequency() {
	return _weaponFrequency;
}

short Borg::Ship::getRepair() {
	return _repair;
}

void Borg::Ship::setCore(WarpSystem::Core *core) {
	_core = core;
}

void Borg::Ship::setLocation(Destination location) {
	_location = location;
}

void Borg::Ship::setHome(Destination home) {
	_home = home;
}

void Borg::Ship::setShield(int shield) {
	_shield = shield;
}

void Borg::Ship::setWeaponFrequency(int weaponFrequency) {
	_weaponFrequency = weaponFrequency;
}

void Borg::Ship::setRepair(short repair) {
	_repair = repair;
}

void Borg::Ship::setupCore(WarpSystem::Core *core) {
	setCore(core);
}

void Borg::Ship::checkCore() {
	if (_core) {
		speak(_core->isStable() ? "Everything is in order." : "Critical failure imminent.");
	}
}

bool Borg::Ship::move(int warp, Destination d) {
	if (warp <= _maxWarp && d != _location && isStable()) {
		_location = d;
		return true;
	}
	return false;
}

bool Borg::Ship::move(int warp) {
	return move(warp, _home);
}

bool Borg::Ship::move(Destination d) {
	return move(_maxWarp, d);
}

bool Borg::Ship::move() {
	return move(_maxWarp, _home);
}

void Borg::Ship::fire(Federation::Starfleet::Ship* ship) {
	ship->stricken(_weaponFrequency);
	std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::fire(Federation::Ship* ship) {
	ship->stricken(_weaponFrequency);
	std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::stricken(int damage) {
	_shield -= damage;
	if (_shield < 0) {
		_shield = 0;
	}
}

void Borg::Ship::repair() {
	if (_repair > 0) {
		_repair--;
		_shield = 100;
		std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
	}
	else {
		std::cout << "Energy cells depleted, shield weakening." << std::endl;
	}
}

/******************************************************************************/
