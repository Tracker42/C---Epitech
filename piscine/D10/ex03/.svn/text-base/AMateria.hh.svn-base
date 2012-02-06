/**
 *
 *
 *
 */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include <iostream>

class AMateria;

#include "ICharacter.hh"

class AMateria {
protected:
	unsigned int xp;
	std::string type;

	void speak(std::string message);

public:
	AMateria(std::string const & type);
	~AMateria();

	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria * clone() const = 0;
	virtual void use(ICharacter & target);
	virtual void effect(ICharacter & target);

};

#endif
