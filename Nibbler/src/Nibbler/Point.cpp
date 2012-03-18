
#include "Point.hh"

Point::Point()
: x(0), y(0) {

}

Point::Point(int x, int y)
: x(x), y(y) {

}

Point::Point(const Point & src)
: x(src.x), y(src.y) {

}

Point::~Point() {

}

int Point::getX() const {
	return x;
}

int Point::getY() const {
	return y;
}

void Point::setX(int x) {
	this->x = x;
}

void Point::setY(int y) {
	this->y = y;
}

Point & Point::operator =(const Point & point) {
	x = point.x;
	y = point.y;
	return *this;
}

Point Point::operator +(const Point & point) const {
	Point p(x + point.x, y + point.y);
	return p;
}

Point Point::operator -(const Point & point) const {
	Point p(x - point.x, y - point.y);
	return p;
}

Point & Point::operator +=(const Point & point) {
	x += point.x;
	y += point.y;
	return *this;
}

Point & Point::operator -=(const Point & point) {
	x -= point.x;
	y -= point.y;
	return *this;
}

bool Point::operator ==(const Point& point) const {
	return x == point.x && y == point.y;
}

bool Point::operator !=(const Point& point) const {
	return !(*this == point);
}
