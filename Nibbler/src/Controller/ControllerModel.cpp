
#include "ControllerModel.hh"

ControllerModel::ControllerModel() {
}

ControllerModel::~ControllerModel() {
	DLManager::destroy();
}

const Snake & ControllerModel::getSnake() const {
	return nibbler->getSnake();
}

const Food & ControllerModel::getFood() const {
	return nibbler->getFood();
}

const Point & ControllerModel::getLimit() const {
	return nibbler->getLimit();
}

int ControllerModel::getScore() const {
	return nibbler->getScore();
}

void ControllerModel::updateDirection(Model::Direction direction) {
	nibbler->updateDirection(direction);
}

bool ControllerModel::init(int argc, char **argv) {
	if (argc < 4) {
		return false;
	}
	size_t x = Conversion<size_t>::toValue(argv[1]);
	size_t y = Conversion<size_t>::toValue(argv[2]);
	if (x < NIBBLER_SIZE_MIN || x > NIBBLER_SIZE_MAX || y < NIBBLER_SIZE_MIN || y > NIBBLER_SIZE_MAX) {
		std::cout << "Taille de jeu trop grande (" << x << ":" << y << ")" << std::endl;
		return false;
	}

	nibbler = new Nibbler(Point(x, y));
	try {
		controllerView = DLCALL(t_load_guilib, argv[3], VIEW_SYMBOL)(argc, argv);
	}
	catch (DLException & e) {
		std::cout << e.what() << std::endl;
	}
	if (!controllerView->init(this)) {
		std::cout << "Erreur dans l'initialisation de la librairie graphique" << std::endl;
		return false;
	}
	return true;
}

int ControllerModel::execute() {
	std::cout << "Start game" << std::endl;
	int i = 0;
	timeval t1;
	timeval t2;
	gettimeofday(&t1, NULL);
	quit = Model::RUN;
	while (quit == Model::RUN) {
		gettimeofday(&t2, NULL);
		if ((t2.tv_sec - t1.tv_sec) * 1000000 + t2.tv_usec - t1.tv_usec > NIBBLER_DELAY) {
			t1 = t2;
			quit = nibbler->execute();
			i = 0;
		}
		if (!controllerView->update()) {
			break;
		}
		i++;
		usleep(NIBBLER_SLEEP);
	}
	controllerView->quit(quit);
	delete nibbler;
	return 0;
}

void ControllerModel::end(NQuit quit) {
	this->quit = quit;
}
