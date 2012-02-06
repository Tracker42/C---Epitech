/**
 *
 *
 *
 */

#include "Paladin.hh"

Paladin::Paladin() {

}

Paladin::Paladin(std::string const & name, int lvl) {
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
	costPv = Priest::baseCostPv;
	restorePm = baseRestorePm;
	costPm = Priest::baseCostPm;

	Range = Character::CLOSE;
	weaponClose = std::string("hammer");
	weaponRange = std::string("fire ball");
	bonusCloseAttack = &Paladin::force;
	bonusRangeAttack = &Paladin::esprit;
	bonusRestorePm = &Paladin::bonusNull;

	speakCreated();
}

Paladin::~Paladin() {

}

int Paladin::RangeAttack() {
	return Priest::RangeAttack();
}

void Paladin::Heal() {
	Priest::Heal();
}

int Paladin::Intercept() {
	if (actionCost(10)) {
		speakIntercept();
		Range = Character::CLOSE;
	}
	else {
		speakOutOfPower();
	}
	return 0;
}

void Paladin::speakCreated() const {
	Warrior::speakCreated();
	speak("teleported");
	speak("enters in the order");
	std::cout << "the light falls on " << name << std::endl;
}

void Paladin::speakCloseAttack() const {
	Warrior::speakCloseAttack();
}

void Paladin::speakRangeAttack() const {
	Priest::speakRangeAttack();
}
