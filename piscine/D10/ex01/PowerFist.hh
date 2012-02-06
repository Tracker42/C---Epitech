/**
 *
 *
 *
 */

#ifndef __POWERFIST_H__
#define __POWERFIST_H__

#include <string>
#include <iostream>

#include "AWeapon.hh"

class PowerFist : public AWeapon {
protected:

public:
	PowerFist();
	virtual ~PowerFist();

	virtual void attack() const;

};

#endif
