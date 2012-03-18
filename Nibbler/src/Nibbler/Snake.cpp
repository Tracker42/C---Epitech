
#include "Snake.hh"

Snake::Snake() {
	init(Point(1, 1), 4);
}

Snake::Snake(const Point & first, size_t size) {
	init(first, size);
}

Snake::~Snake() {
	destroy();
}

void Snake::init(const Point & first, size_t size) {
	destroy();
	eaten = NULL;
	node.push_back(new Element(first, Model::STAY));
	while (size-- > 0) {
		node.push_back(new Element(first, Model::STAY));
	}
	node.front()->move(Model::RIGHT);
}

void Snake::destroy() {
	container<Element *>::iterator iter = node.begin();
	while (iter != node.end()) {
		delete *iter;
	}
	node.clear();
}

int Snake::getSize() const {
	return node.size();
}

bool Snake::move(NDirection direction) {
	container<Element *>::iterator iter = node.begin();
	NDirection dir;
	while (iter != node.end()) {
		dir = (*iter)->getDirection();
		(*iter)->move(direction);
		direction = dir;
		if ((*iter) != node.front() && *(*iter) == head()) {
			return false;
		}
		++iter;
	}
	if (eaten) {
		node.push_back(eaten);
		eaten = NULL;
	}
	return true;
}

const Element & Snake::head() const {
	return (*this)[0];
}

const Element & Snake::tail() const {
	return (*this)[node.size() - 1];
}

void Snake::eat() {
	eaten = new Element(*(node.back()));
	eaten->setDirection(Model::STAY);
}

void Snake::reset(Point first, size_t size) {
	destroy();
	init(first, size);
}

const Element & Snake::operator [](size_t pos) const {
	if (pos < node.size()) {
		return (*node[pos]);
	}
	throw std::exception();
}
