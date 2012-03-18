/**
 *
 *
 *
 */

#ifndef __NIBBLER_HH__
#define	__NIBBLER_HH__

#include <cstdlib>

#include "Model.hh"
#include "Food.hh"
#include "Snake.hh"

class Nibbler {
protected:
	Point limit;
	Snake * snake;
	Food * food;
	int score;
	NDirection direction;

public:
	Nibbler(const Point & point);
	virtual ~Nibbler();

	virtual void updateDirection(NDirection direction);
	virtual const Snake & getSnake() const;
	virtual const Food & getFood() const;
	virtual const Point & getLimit() const;
	virtual int getScore() const;
	virtual NDirection getDirection() const;

	NQuit execute();

	void createFood();

};

#endif
