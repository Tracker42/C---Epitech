/**
 *
 *
 *
 */

#include "Federation.hh"

/******************************************************************************/
		/******************/
		/*Federation::Starfleet::Ship*/
		/******************/
/******************************************************************************/

Federation::Starfleet::Ship::Ship(int length = 289, int width = 132, std::string name = "Entreprise", short maxWarp = 6, int torpedo = 20) {
	_length = length;
	_width = width;
	_name = name;
	_maxWarp = maxWarp;
	_home = EARTH;
	_location = _home;
	_photonTorpedo = torpedo;
	std::cout << "The ship USS " << _name << " has been finished. It is " << _length << " m in length and " << _width << " m in width. It can go to Warp " << _maxWarp << "! Weapons are set: " << _photonTorpedo << " torpedoes ready." << std::endl;
}

Federation::Starfleet::Ship::~Ship() {

}

void Federation::Starfleet::Ship::speak(std::string message) {
	std::cout << "USS " << _name << ": " << message << std::endl;
}

int Federation::Starfleet::Ship::getLength() {
	return _length;
}

int Federation::Starfleet::Ship::getWidth() {
	return _width;
}

std::string Federation::Starfleet::Ship::getName() {
	return _name;
}

short Federation::Starfleet::Ship::getMaxWarp() {
	return _maxWarp;
}

WarpSystem::Core *Federation::Starfleet::Ship::getCore() {
	return _core;
}

bool Federation::Starfleet::Ship::isStable() {
	if (getCore()) {
		return getCore()->isStable();
	}
	return false;
}

Federation::Starfleet::Captain *Federation::Starfleet::Ship::getCaptain() {
	return _captain;
}

Destination Federation::Starfleet::Ship::getLocation() {
	return _location;
}

Destination Federation::Starfleet::Ship::getHome() {
	return _home;
}

int Federation::Starfleet::Ship::getShield() {
	return _shield;
}

int Federation::Starfleet::Ship::getPhotonTorpedo() {
	return _photonTorpedo;
}

void Federation::Starfleet::Ship::setCore(WarpSystem::Core *core) {
	_core = core;
}

void Federation::Starfleet::Ship::setLocation(Destination location) {
	_location = location;
}

void Federation::Starfleet::Ship::setHome(Destination home) {
	_home = home;
}

void Federation::Starfleet::Ship::setShield(int shield) {
	_shield = shield;
}

void Federation::Starfleet::Ship::setPhotonTorpedo(int photonTorpedo) {
	_photonTorpedo = photonTorpedo;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core* core) {
	setCore(core);
	speak("The core is set.");
}

void Federation::Starfleet::Ship::checkCore() {
	if (_core) {
		speak(std::string("The core is ") + (_core->getStability() ? "stable" : "unstable") + " at the time.");
	}
}

void Federation::Starfleet::Ship::promote(Captain* captain) {
	_captain = captain;
	std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d) {
	if (warp <= _maxWarp && d != _location && isStable()) {
		_location = d;
		return true;
	}
	return false;
}

bool Federation::Starfleet::Ship::move(int warp) {
	return move(warp, _home);
}

bool Federation::Starfleet::Ship::move(Destination d) {
	return move(_maxWarp, d);
}

bool Federation::Starfleet::Ship::move() {
	return move(_maxWarp, _home);
}

void Federation::Starfleet::Ship::fire(Borg::Ship* ship) {
	return fire(1, ship);
}

void Federation::Starfleet::Ship::fire(int torpedo, Borg::Ship* ship) {
	if (torpedo <= _photonTorpedo) {
		ship->stricken(50 * torpedo);
		_photonTorpedo -= torpedo;
		std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
	}
	else if (_photonTorpedo) {
		std::cout << _name << ": No enough torpedoes to fire, " << (_captain ? _captain->getName() : "") << "!" << std::endl;
	}
	else {
		std::cout << _name << ": No more torpedo to fire, " << (_captain ? _captain->getName() : "") << "!" << std::endl;
	}
}

void Federation::Starfleet::Ship::stricken(int damage) {
	_shield -= damage;
	if (_shield < 0) {
		_shield = 0;
	}
}

/******************************************************************************/
		/******************/
		/*Federation::Ship*/
		/******************/
/******************************************************************************/

Federation::Ship::Ship(int length, int width, std::string name) {
	_length = length;
	_width = width;
	_name = name;
	_home = VULCAN;
	_location = _home;
	std::cout << "The independant ship " << _name << " just finished its construction. It is " << _length << " m in length and " << _width << " m in width." << std::endl;
}

Federation::Ship::~Ship() {

}

void Federation::Ship::speak(std::string message) {
	std::cout << _name << ": " << message << std::endl;
}

int Federation::Ship::getLength() {
	return _length;
}

int Federation::Ship::getWidth() {
	return _width;
}

std::string Federation::Ship::getName() {
	return _name;
}

short Federation::Ship::getMaxWarp() {
	return 1;
}

WarpSystem::Core *Federation::Ship::getCore() {
	return _core;
}

bool Federation::Ship::isStable() {
	if (getCore()) {
		return getCore()->isStable();
	}
	return false;
}

Destination Federation::Ship::getLocation() {
	return _location;
}

Destination Federation::Ship::getHome() {
	return _home;
}

void Federation::Ship::setCore(WarpSystem::Core *core) {
	_core = core;
}

void Federation::Ship::setLocation(Destination location) {
	_location = location;
}

void Federation::Ship::setHome(Destination home) {
	_home = home;
}

void Federation::Ship::setupCore(WarpSystem::Core* core) {
	setCore(core);
	speak("The core is set.");
}

void Federation::Ship::checkCore() {
	if (_core) {
		speak(std::string("The core is ") + (_core->getStability() ? "stable" : "unstable") + " at the time.");
	}
}

bool Federation::Ship::move(int warp, Destination d) {
	if (warp <= getMaxWarp() && d != _location && isStable()) {
		_location = d;
		return true;
	}
	return false;
}

bool Federation::Ship::move(int warp) {
	return move(warp, _home);
}

bool Federation::Ship::move(Destination d) {
	return move(getMaxWarp(), d);
}

bool Federation::Ship::move() {
	return move(getMaxWarp(), _home);
}

void Federation::Ship::stricken(int damage) {
	damage = 0;
	if (getCore()) {
		getCore()->setStability(false);
	}
}

/******************************************************************************/
		/********************************/
		/*Federation::Starfleet::Captain*/
		/********************************/
/******************************************************************************/

Federation::Starfleet::Captain::Captain(std::string name) {
	_name = name;
}

Federation::Starfleet::Captain::~Captain() {

}

void Federation::Starfleet::Captain::speak(std::string message) {
	std::cout << message << std::endl;
}

std::string Federation::Starfleet::Captain::getName() {
	return _name;
}

int Federation::Starfleet::Captain::getAge() {
	return _age;
}

void Federation::Starfleet::Captain::setAge(int age) {
	_age = age;
}

/******************************************************************************/
		/*******************************/
		/*Federation::Starfleet::Ensign*/
		/*******************************/
/******************************************************************************/

Federation::Starfleet::Ensign::Ensign(std::string name) {
	_name = name;
	speak("awaiting orders.");
}

Federation::Starfleet::Ensign::~Ensign() {

}

void Federation::Starfleet::Ensign::speak(std::string message) {
	std::cout << "Ensign " << _name << ", " << message << std::endl;
}

std::string Federation::Starfleet::Ensign::getName() {
	return _name;
}

/******************************************************************************/
