/**
 *
 *
 *
 */

#ifndef __AWEAPON_H__
#define __AWEAPON_H__

#include <string>
#include <iostream>

class AWeapon {
protected:
	std::string name;
	int apcost;
	int damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();

	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;

};

#endif
