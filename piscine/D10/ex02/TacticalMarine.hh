/**
 *
 *
 *
 */

#ifndef __TACTICALMARINE_H__
#define __TACTICALMARINE_H__

#include <string>
#include <iostream>

#include "ISpaceMarine.hh"

class TacticalMarine : public ISpaceMarine {
protected:

	void speak(std::string message) const;

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const & marine);
	virtual ~TacticalMarine();

	virtual ISpaceMarine *clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

};

#endif
