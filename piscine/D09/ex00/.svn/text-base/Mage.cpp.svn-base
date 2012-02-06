/**
 *
 *
 *
 */

#include "Mage.hh"

Mage::Mage() {

}

Mage::Mage(std::string const & name, int lvl) {
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
	weaponClose = std::string("");
	weaponRange = std::string("fire ball");
	bonusCloseAttack = &Mage::bonusNull;
	bonusRangeAttack = &Mage::esprit;
	bonusRestorePm = &Mage::intelligence;

	speakCreated();
}

Mage::~Mage() {

}

int Mage::CloseAttack() {
	if (actionCost(costClose)) {
		speakCloseAttack();
		Range = Character::RANGE;
		return 0;
	}
	speakOutOfPower();
	return 0;
}

void Mage::speakCreated() const {
	Character::speakCreated();
	speak("teleported");
}

void Mage::speakCloseAttack() const {
	speak("blinks");
}

void Mage::speakRestorePower() const {
	speak("takes a mana potion");
}
