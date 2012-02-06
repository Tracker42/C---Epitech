/**
 *
 *
 *
 */

#include "Character.hh"

Character::Character() : bonusNull(0) {

}

Character::Character(std::string const & name, int lvl) : bonusNull(0) {
	this->name = name;
	this->lvl = lvl;
	pv = pvMax;
	pm = pmMax;
	force = baseForce;
	endurance = baseEndurance;
	intelligence = baseIntelligence;
	esprit = baseEsprit;
	agilite = baseAgilite;

	atkClose = baseAtkClose;
	costClose = costAtkClose;
	atkRange = baseAtkRange;
	costRange = costAtkRange;
	restorePv = baseRestorePv;
	costPv = baseCostPv;
	restorePm = baseRestorePm;
	costPm = baseCostPm;

	Range = Character::CLOSE;
	weaponClose = std::string("wood stick");
	weaponRange = std::string("stone");
	bonusCloseAttack = &Character::force;
	bonusRangeAttack = &Character::force;
	bonusRestorePm = &Character::bonusNull;

	speakCreated();
}

Character::~Character() {

}

std::string const & Character::getName() const {
	return name;
}

int Character::getLvl() const {
	return lvl;
}

int Character::getPv() const {
	return pv;
}

int Character::getPower() const {
	return pm;
}

int Character::getForce() const {
	return force;
}

int Character::getEndurance() const {
	return endurance;
}

int Character::getIntelligence() const {
	return intelligence;
}

int Character::getEsprit() const {
	return esprit;
}

int Character::getAgilite() const {
	return agilite;
}

void Character::changePv(int value) {
	pv += value;
	if (pv < 0) {
		pv = 0;
	}
	else if (pv > pvMax) {
		pv = pvMax;
	}
}

void Character::changePm(int value) {
	pm += value;
	if (pm < 0) {
		pm = 0;
	}
	else if (pm > pmMax) {
		pm = pmMax;
	}
}

int Character::CloseAttack() {
	if (actionCost(costClose)) {
		speakCloseAttack();
		return atkClose + this->*bonusCloseAttack;
	}
	speakOutOfPower();
	return 0;
}

int Character::RangeAttack() {
	if (actionCost(costRange)) {
		speakRangeAttack();
		return atkRange + this->*bonusRangeAttack;
	}
	speakOutOfPower();
	return 0;
}

void Character::Heal() {
	if (actionCost(costPv)) {
		changePv(restorePv);
		speakHeal();
		return;
	}
	speakOutOfPower();
}

void Character::RestorePower() {
	if (actionCost(costPm)) {
		changePm(restorePm + this->*bonusRestorePm);
		speakRestorePower();
		return;
	}
	speakOutOfPower();
}

void Character::TakeDamage(int damage) {
	if (damage >= 0) {
		changePv(-damage);
		if (pv == 0) {
			speakOutOfCombat();
		}
		else {
			speakTakeDamage(damage);
		}
	}
}

bool Character::actionCost(int cost) {
	if (pm >= cost) {
		changePm(-cost);
		return true;
	}
	return false;
}

void Character::speak(std::string message) const {
	std::cout << name << " " << message << std::endl;
}

void Character::speakCreated() const {
	speak("Created");
}

void Character::speakCloseAttack() const {
	speak(std::string("strikes with a ") + weaponClose);
}

void Character::speakRangeAttack() const {
	speak(std::string("launches a ") + weaponRange);
}

void Character::speakHeal() const {
	speak("takes a potion");
}

void Character::speakRestorePower() const {
	speak("eats");
}

void Character::speakTakeDamage(int damage) const {
	speak(std::string("takes ") + int_to_string(damage) + " damage");
}

void Character::speakOutOfPower() const {
	speak("out of power");
}

void Character::speakOutOfCombat() const {
	speak("out of combat");
}

std::string int_to_string(int n) {
	std::ostringstream o;
	o << n;
	return o.str();
}
