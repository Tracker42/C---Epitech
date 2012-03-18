
#include "Food.hh"

Food::Food()
: position(0, 0) {

}

Food::Food(int x, int y)
: position(x, y) {

}

Food::Food(const Point & position)
: position(position) {

}

Food::Food(const Food & src)
: position(src.position) {

}

Food::~Food() {

}

const Point & Food::getPosition() const {
	return position;
}

int Food::getX() const {
	return position.getX();
}

int Food::getY() const {
	return position.getY();
}

void Food::setPosition(const Point& position) {
	this->position = position;
}

void Food::setPosition(int x, int y) {
	position.setX(x);
	position.setY(y);
}
