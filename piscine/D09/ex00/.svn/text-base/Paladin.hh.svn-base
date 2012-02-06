/**
 *
 *
 *
 */

#ifndef __PALADIN_H__
#define __PALADIN_H__

#include <string>
#include <iostream>

#include "Warrior.hh"
#include "Priest.hh"

class Paladin : public Warrior, virtual public Priest {
protected:
	Paladin();

public:
	explicit Paladin(std::string const & name, int lvl);
	~Paladin();

	virtual int RangeAttack();
	virtual void Heal();
	virtual int Intercept();

protected:
	virtual void speakCreated() const;
	virtual void speakCloseAttack() const;
	virtual void speakRangeAttack() const;

	static int const baseForce = 9;
	static int const baseEndurance = 10;
	static int const baseIntelligence = 10;
	static int const baseEsprit = 10;
	static int const baseAgilite = 2;

	static int const baseAtkClose = 20;
	static int const costAtkClose = 30;
	static int const baseAtkRange = 20;
	static int const costAtkRange = 25;
	static int const baseRestorePv = 70;
	static int const baseRestorePm = 100;

};

#endif
