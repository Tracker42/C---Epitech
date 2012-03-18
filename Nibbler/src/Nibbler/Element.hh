/**
 *
 *
 *
 */

#ifndef __ELEMENT_HH__
#define	__ELEMENT_HH__

#include "Model.hh"
#include "Point.hh"

class Element : public Point {
private:
	static const Vector left;
	static const Vector up;
	static const Vector right;
	static const Vector down;
	static const Vector stay;

protected:
	NDirection direction;

	const Vector & getVector(NDirection direction);

public:
	Element(int x, int y, NDirection direction);
	Element(const Point & point, NDirection direction);
	Element(const Element & src);
	virtual ~Element();

	void move(NDirection direction);
	NDirection getDirection() const;
	void setDirection(NDirection direction);

};

#endif
