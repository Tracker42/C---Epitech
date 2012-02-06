/**
 *
 *
 *
 */

#include "Hunter.hh"

Hunter::Hunter() {

}

Hunter::Hunter(std::string const & name, int lvl) {
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

	Range = Hunter::CLOSE;
	weaponClose = std::string("sword");
	weaponRange = std::string("bow");
	bonusCloseAttack = &Hunter::force;
	bonusRangeAttack = &Hunter::agilite;
	bonusRestorePm = &Hunter::bonusNull;

	speakCreated();
}

Hunter::~Hunter() {

}

std::string const & Hunter::getName() const {
	return Warrior::getName();
}

int Hunter::getLvl() const {
	return Warrior::getLvl();
}

int Hunter::getPv() const {
	return Warrior::getPv();
}

int Hunter::getPower() const {
	return Warrior::getPower();
}

int Hunter::getForce() const {
	return Warrior::getForce();
}

int Hunter::getEndurance() const {
	return Warrior::getEndurance();
}

int Hunter::getIntelligence() const {
	return Warrior::getIntelligence();
}

int Hunter::getEsprit() const {
	return Warrior::getEsprit();
}

int Hunter::getAgilite() const {
	return Warrior::getAgilite();
}


void Hunter::changePv(int value) {
	Warrior::changePv(value);
}

void Hunter::changePm(int value) {
	Warrior::changePm(value);
}

int Hunter::CloseAttack() {
	return Warrior::CloseAttack();
}

int Hunter::RangeAttack() {
	return Character::RangeAttack();
}

void Hunter::Heal() {
	return Warrior::Heal();
}

void Hunter::RestorePower() {
	return Warrior::RestorePower();
}

void Hunter::TakeDamage(int damage) {
	return Warrior::TakeDamage(damage);
}

void Hunter::speakCreated() const {
	Warrior::speakCreated();
	speak("is born from a tree");
}

void Hunter::speakRangeAttack() const {
	speak(std::string("uses his ") + weaponRange);
}

void Hunter::speakRestorePower() const {
	speak("meditates");
}
