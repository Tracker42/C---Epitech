/**
 *
 *
 *
 */

#ifndef __PRIEST_H__
#define __PRIEST_H__

#include <string>
#include <iostream>

#include "Mage.hh"

class Priest : public Mage {
protected:
	Priest();

public:
	explicit Priest(std::string const & name, int lvl);
	virtual ~Priest();

	virtual int CloseAttack();

protected:
	virtual void speakCreated() const;
	virtual void speakCloseAttack() const;
	virtual void speakHeal() const;

	static int const baseForce = 4;
	static int const baseEndurance = 4;
	static int const baseIntelligence = 42;
	static int const baseEsprit = 21;
	static int const baseAgilite = 2;

	static int const baseAtkClose = 10;
	static int const baseRestorePv = 70;
	static int const baseCostPv = 10;

};

#endif
