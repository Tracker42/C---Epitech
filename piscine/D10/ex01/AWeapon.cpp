/**
 *
 *
 *
 */

#include "AWeapon.hh"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: name(name), apcost(apcost), damage(damage) {

}

AWeapon::~AWeapon() {

}

std::string const & AWeapon::getName() const {
	return name;
}

int AWeapon::getAPCost() const {
	return apcost;
}

int AWeapon::getDamage() const {
	return damage;
}
