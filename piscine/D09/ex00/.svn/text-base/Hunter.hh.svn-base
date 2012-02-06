/**
 *
 *
 *
 */

#ifndef __HUNTER_H__
#define __HUNTER_H__

#include <string>
#include <iostream>

#include "Warrior.hh"

class Hunter : protected Warrior {
protected:
	Hunter();

public:
	Hunter(std::string const & name, int lvl);
	virtual ~Hunter();

	virtual std::string const & getName() const;
	virtual int getLvl() const;
	virtual int getPv() const;
	virtual int getPower() const;

	virtual int getForce() const;
	virtual int getEndurance() const;
	virtual int getIntelligence() const;
	virtual int getEsprit() const;
	virtual int getAgilite() const;

	virtual void changePv(int value);
	virtual void changePm(int value);

	virtual int CloseAttack();
	virtual int RangeAttack();
	virtual void Heal();
	virtual void RestorePower();
	virtual void TakeDamage(int damage);

protected:
	virtual void speakCreated() const;
	virtual void speakRangeAttack() const;
	virtual void speakRestorePower() const;

	static int const baseForce = 9;
	static int const baseEndurance = 9;
	static int const baseIntelligence = 5;
	static int const baseEsprit = 6;
	static int const baseAgilite = 24;

	static int const baseAtkClose = 20;
	static int const costAtkClose = 30;
	static int const baseAtkRange = 20;
	static int const costAtkRange = 25;
	static int const baseRestorePv = 50;
	static int const baseCostPv = 0;
	static int const baseRestorePm = 100;
	static int const baseCostPm = 0;

};

#endif
