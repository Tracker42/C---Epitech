/**
 *
 *
 *
 */

#ifndef __ICHARACTER_H__
#define __ICHARACTER_H__

#include <string>
#include <iostream>

class ICharacter;

#include "AMateria.hh"

class ICharacter {
protected:

public:
	virtual ~ICharacter() {}

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria * materia) = 0;
	virtual void unequip(int index) = 0;
	virtual void use(int index, ICharacter & target) = 0;

};

#endif
