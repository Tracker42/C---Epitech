/**
 *
 *
 *
 */

#ifndef __AENEMY_H__
#define __AENEMY_H__

#include <string>
#include <iostream>

class AEnemy {
protected:
	int hp;
	std::string type;

public:
	AEnemy(int hp, std::string const & type);
	virtual ~AEnemy();

	std::string const & getType() const;
	int getHP() const;

	virtual void takeDamage(int damage);
};

#endif
