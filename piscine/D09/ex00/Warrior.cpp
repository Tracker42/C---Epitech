/**
 *
 *
 *
 */

#include "Warrior.hh"

Warrior::Warrior() {

}

Warrior::Warrior(std::string const & name, int lvl) {
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
	weaponClose = std::string("hammer");
	weaponRange = std::string("");
	bonusCloseAttack = &Warrior::force;
	bonusRangeAttack = &Warrior::bonusNull;
	bonusRestorePm = &Warrior::bonusNull;

	speakCreated();
}

Warrior::~Warrior() {

}

int Warrior::RangeAttack() {
	if (actionCost(costRange)) {
		speakIntercept();
		Range = Character::CLOSE;
	}
	else {
		speakOutOfPower();
	}
	return 0;
}

void Warrior::speakCreated() const {
	Character::speakCreated();
	std::cout << "I'm " << name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

void Warrior::speakCloseAttack() const {
	speak(std::string("strikes with his ") + weaponClose);
}

void Warrior::speakIntercept() const {
	speak("intercepts");
}
