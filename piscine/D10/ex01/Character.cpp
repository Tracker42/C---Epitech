/**
 *
 *
 *
 */

#include "Character.hh"

Character::Character(std::string const & name)
: name(name), ap(40), weapon(NULL) {

}

Character::~Character() {

}

void Character::recoverAP() {
	ap += 10;
	if (ap > 40) {
		ap = 40;
	}
}

void Character::equip(AWeapon* weapon) {
	this->weapon = weapon;
}

void Character::attack(AEnemy* enemy) {
	if (weapon && enemy) {
		if (action(weapon->getAPCost())) {
			std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
			weapon->attack();
			enemy->takeDamage(weapon->getDamage());
			if (enemy->getHP() <= 0) {
				delete enemy;
			}
		}
	}
}

bool Character::action(int cost) {
	if (ap >= cost) {
		ap -= cost;
		return true;
	}
	return false;
}

std::string const & Character::getName() const {
	return name;
}

int Character::getAp() const {
	return ap;
}

AWeapon *Character::getWeapon() const {
	return weapon;
}

std::ostream & operator<<(std::ostream & os, Character const & perso) {
	os << perso.getName() <<  " has " << perso.getAp() << " AP and ";
	if (perso.getWeapon()) {
		os << "wields a " << perso.getWeapon()->getName();
	}
	else {
		os << "is unarmed";
	}
	os << std::endl;
	return os;
}
