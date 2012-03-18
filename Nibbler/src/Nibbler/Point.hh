/**
 *
 *
 *
 */

#ifndef __POINT_HH__
#define	__POINT_HH__

class Point {
protected:
	int x;
	int y;

public:
	Point();
	Point(int x, int y);
	Point(const Point & src);
	virtual ~Point();

	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);

	Point & operator =(const Point & point);
	Point operator +(const Point & point) const;
	Point operator -(const Point & point) const;
	Point & operator +=(const Point & point);
	Point & operator -=(const Point & point);
	bool operator ==(const Point & point) const;
	bool operator !=(const Point & point) const;

};

typedef Point Vector;

#endif
