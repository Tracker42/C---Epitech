/**
 *
 *
 *
 */

#ifndef __CURE_H__
#define __CURE_H__

#include <string>
#include <iostream>

#include "AMateria.hh"
#include "ICharacter.hh"

class Cure : public AMateria {
protected:

public:
	Cure();
	Cure(Cure const & cure);
	~Cure();

	virtual AMateria * clone() const;
	virtual void effect(ICharacter & target);

};

#endif
