/**
 *
 *
 *
 */

#ifndef __CONTROLLERMODELINTERFACE_HH__
#define	__CONTROLLERMODELINTERFACE_HH__

#include "Model.hh"
#include "../Nibbler/Point.hh"
#include "../Nibbler/Food.hh"
#include "../Nibbler/Snake.hh"

class ControllerModelInterface {
protected:

public:
	virtual const Snake & getSnake() const = 0;
	virtual const Food & getFood() const = 0;
	virtual const Point & getLimit() const = 0;
	virtual int getScore() const = 0;

	virtual void updateDirection(NDirection direction) = 0;
	virtual void end(NQuit quit) = 0;

};

#endif
