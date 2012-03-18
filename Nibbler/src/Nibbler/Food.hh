/**
 *
 *
 *
 */

#ifndef __FOOD_HH__
#define	__FOOD_HH__

#include "Point.hh"

class Food {
protected:
	Point position;

public:
	Food();
	Food(int x, int y);
	Food(const Point & position);
	Food(const Food & src);
	virtual ~Food();

	const Point & getPosition() const;
	int getX() const;
	int getY() const;

	void setPosition(const Point & position);
	void setPosition(int x, int y);

};

#endif
