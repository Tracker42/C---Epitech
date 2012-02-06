/**
 *
 *
 *
 */

#ifndef __IMININGLASER_H__
#define __IMININGLASER_H__

class IMiningLaser;

#include "IAsteroid.hh"

class IMiningLaser {
public:
	virtual ~IMiningLaser() {}
	
	virtual void mine(IAsteroid * asteroid) = 0;
};

#endif
