/**
 *
 *
 *
 */

#ifndef __ISPACEMARINE_H__
#define __ISPACEMARINE_H__

class ISpaceMarine {
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine *clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;

};

#endif
