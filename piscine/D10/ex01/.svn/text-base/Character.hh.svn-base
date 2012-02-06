/**
 *
 *
 *
 */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <string>
#include <iostream>

#include "AEnemy.hh"
#include "AWeapon.hh"

class Character {
protected:
	std::string name;
	int ap;
	AWeapon *weapon;

public:
	Character(std::string const & name);
	~Character();

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(AEnemy *enemy);
	bool action(int cost);
	std::string const & getName() const;
	int getAp() const;
	AWeapon *getWeapon() const;
};

std::ostream & operator<<(std::ostream & os, Character const & perso);

#endif
