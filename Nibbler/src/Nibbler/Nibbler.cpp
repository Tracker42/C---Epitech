
#include "Nibbler.hh"

Nibbler::Nibbler(const Point & point)
: limit(point), score(0), direction(Model::RIGHT) {
	score = 0;
	snake = new Snake();
	food = new Food();
	createFood();
}

Nibbler::~Nibbler() {

}

void Nibbler::updateDirection(NDirection direction) {
	NDirection dir = snake->head().getDirection();
	if ((dir == Model::LEFT && direction != Model::RIGHT) ||
		(dir == Model::UP && direction != Model::DOWN) ||
		(dir == Model::RIGHT && direction != Model::LEFT) ||
		(dir == Model::DOWN && direction != Model::UP)) {
		this->direction = direction;
	}
}

const Snake & Nibbler::getSnake() const {
	return *snake;
}

const Food & Nibbler::getFood() const {
	return *food;
}

const Point & Nibbler::getLimit() const {
	return limit;
}

int Nibbler::getScore() const {
	return score;
}

NDirection Nibbler::getDirection() const {
	return direction;
}

NQuit Nibbler::execute() {
	if (!snake->move(direction)) {
		return Model::GAMEOVER;
	}
	if (snake->head() == food->getPosition()) {
		score += snake->getSize();
		snake->eat();
		if (snake->getSize() <= limit.getX() * limit.getY()) {
			createFood();
		}
		else {
			return Model::WIN;
		}
	}
	if (snake->head().getX() < 0 || snake->head().getX() >= limit.getX() ||
		snake->head().getY() < 0 || snake->head().getY() >= limit.getY()) {
		return Model::GAMEOVER;
	}
	return Model::RUN;
}

void Nibbler::createFood() {
	bool ok;
	int i;
	do {
		food->setPosition(rand() % limit.getX(), rand() % limit.getY());
		ok = true;
		i = 0;
		while (i < snake->getSize()) {
			if ((*snake)[i] == food->getPosition()) {
				ok = false;
				break;
			}
			i++;
		}
	}
	while (!ok);
}
