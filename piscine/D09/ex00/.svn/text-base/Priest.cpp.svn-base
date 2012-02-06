/**
 *
 *
 *
 */

#include "Priest.hh"

Priest::Priest() {

}

Priest::Priest(std::string const & name, int lvl) {
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
	costPm = costPm;

	Range = Character::CLOSE;
	weaponClose = std::string("spirit explosion");
	weaponRange = std::string("fire ball");
	bonusCloseAttack = &Priest::esprit;
	bonusRangeAttack = &Priest::esprit;
	bonusRestorePm = &Priest::intelligence;

	speakCreated();
}

Priest::~Priest() {

}

int Priest::CloseAttack() {
	return Character::CloseAttack();
}

void Priest::speakCreated() const {
	Mage::speakCreated();
	speak("enters in the order");
}

void Priest::speakCloseAttack() const {
	speak(std::string("uses a ") + weaponClose);
}

void Priest::speakHeal() const {
	speak("casts a little heal spell");
}
