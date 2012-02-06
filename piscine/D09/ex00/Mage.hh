/**
 *
 *
 *
 */

#ifndef __MAGE_H__
#define __MAGE_H__

#include <string>
#include <iostream>

#include "Character.hh"

class Mage : virtual public Character {
protected:
	Mage();

public:
	explicit Mage(std::string const & name, int lvl);
	virtual ~Mage();

	virtual int CloseAttack();

protected:
	virtual void speakCreated() const;
	virtual void speakCloseAttack() const;
	virtual void speakRestorePower() const;

	static int const baseForce = 6;
	static int const baseEndurance = 6;
	static int const baseIntelligence = 12;
	static int const baseEsprit = 11;
	static int const baseAgilite = 7;

	static int const baseAtkClose = 0;
	static int const costAtkClose = 10;
	static int const baseAtkRange = 20;
	static int const costAtkRange = 25;
	static int const baseCostPv = 0;
	static int const baseRestorePm = 50;
	static int const baseCostPm = 0;

};

#endif
