/**
 *
 *
 *
 */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <string>
#include <iostream>
#include <sstream>

typedef enum e_AttackRange {
	AR_CLOSE,
	AR_RANGE
} AttackRange;

class Character {
public:
	const static AttackRange CLOSE = AR_CLOSE;
	const static AttackRange RANGE = AR_RANGE;

	AttackRange Range;

protected:
	std::string name;
	std::string race;
	int lvl;

	std::string weaponClose;
	std::string weaponRange;

	int pv;
	int pm;

	int force;
	int endurance;
	int intelligence;
	int esprit;
	int agilite;

	int atkClose;
	int costClose;
	int atkRange;
	int costRange;
	int restorePv;
	int costPv;
	int restorePm;
	int costPm;

	int const bonusNull;
	int const Character::*bonusCloseAttack;
	int const Character::*bonusRangeAttack;
	int const Character::*bonusRestorePm;

protected:
	Character();

public:
	explicit Character(std::string const &name, int lvl);
	virtual ~Character();

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
	virtual bool actionCost(int cost);
	virtual void speak(std::string message) const;

	virtual void speakCreated() const;
	virtual void speakCloseAttack() const;
	virtual void speakRangeAttack() const;
	virtual void speakHeal() const;
	virtual void speakRestorePower() const;
	virtual void speakTakeDamage(int damage) const;
	virtual void speakOutOfPower() const;
	virtual void speakOutOfCombat() const;

	static int const baseForce = 5;
	static int const baseEndurance = 5;
	static int const baseIntelligence = 5;
	static int const baseEsprit = 5;
	static int const baseAgilite = 5;

	static int const pvMax = 100;
	static int const pmMax = 100;
	static int const baseAtkClose = 10;
	static int const costAtkClose = 10;
	static int const baseAtkRange = 5;
	static int const costAtkRange = 10;
	static int const baseRestorePv = 50;
	static int const baseCostPv = 0;
	static int const baseRestorePm = 100;
	static int const baseCostPm = 0;

};

std::string int_to_string(int n);

#endif
