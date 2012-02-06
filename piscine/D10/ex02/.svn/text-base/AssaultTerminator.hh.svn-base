/**
 *
 *
 *
 */

#ifndef __ASSAULTTERMINATOR_H__
#define __ASSAULTTERMINATOR_H__

#include <string>
#include <iostream>

#include "ISpaceMarine.hh"

class AssaultTerminator : public ISpaceMarine {
protected:

	void speak(std::string message) const;

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & marine);
	virtual ~AssaultTerminator();

	virtual ISpaceMarine *clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

};

#endif
