/**
 *
 *
 *
 */

#include "Borg.hh"
#include "Warpsystem.hh"

/******************************************************************************/
/************/
/*Borg::Ship*/
/************/

/******************************************************************************/

Borg::Ship::Ship() {
	_side = 3000;
	_maxWarp = 9;
	_home = UNICOMPLEX;
	_location = _home;
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

void Borg::Ship::setCore(WarpSystem::Core *core) {
	_core = core;
}

void Borg::Ship::setLocation(Destination location) {
	_location = location;
}

void Borg::Ship::setHome(Destination home) {
	_home = home;
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

/******************************************************************************/
