
#include "Element.hh"

const Vector Element::left(-1, 0);
const Vector Element::up(0, -1);
const Vector Element::right(1, 0);
const Vector Element::down(0, 1);
const Vector Element::stay(0, 0);

Element::Element(int x, int y, NDirection direction)
: Point(x, y), direction(direction) {

}

Element::Element(const Point& point, NDirection direction)
: Point(point), direction(direction) {

}

Element::Element(const Element & src)
: Point(src), direction(src.direction) {

}

Element::~Element() {

}

void Element::move(NDirection direction) {
	*this += getVector(direction);
	this->direction = direction;
}

NDirection Element::getDirection() const {
	return direction;
}

void Element::setDirection(Model::Direction direction) {
	this->direction = direction;
}

const Vector & Element::getVector(NDirection direction) {
	switch (direction) {
		case Model::LEFT: return left;
			break;
		case Model::UP: return up;
			break;
		case Model::RIGHT: return right;
			break;
		case Model::DOWN: return down;
			break;
		default: return stay;
			break;
	}
}
