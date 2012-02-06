/**
 *
 *
 *
 */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <string>
#include <iostream>

#include "ICharacter.hh"
#include "AMateria.hh"

class Character : public ICharacter {
protected:
	AMateria *slots[4];
	std::string name;

public:
	Character(std::string const & name);
	Character(Character const & perso);
	~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria * materia);
	virtual void unequip(int index);
	virtual void use(int index, ICharacter & target);
};

#endif
