/**
 *
 *
 *
 */

#ifndef __WARRIOR_H__
#define __WARRIOR_H__

#include <string>
#include <iostream>

#include "Character.hh"

class Warrior : virtual public Character {
protected:
	Warrior();

public:
	explicit Warrior(std::string const &name, int lvl);
	virtual ~Warrior();

	virtual int RangeAttack();

protected:
	virtual void speakCreated() const;
	virtual void speakCloseAttack() const;
	virtual void speakIntercept() const;

	static int const baseForce = 12;
	static int const baseEndurance = 12;
	static int const baseIntelligence = 6;
	static int const baseEsprit = 5;
	static int const baseAgilite = 7;

	static int const pvMax = 100;
	static int const pmMax = 100;
	static int const baseAtkClose = 20;
	static int const costAtkClose = 30;
	static int const baseAtkRange = 0;
	static int const costAtkRange = 10;
	static int const baseRestorePv = 50;
	static int const baseCostPv = 0;
	static int const baseRestorePm = 100;
	static int const baseCostPm = 0;

};

#endif
