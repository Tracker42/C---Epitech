
#include "QtControllerView.hh"

QtControllerView::QtControllerView(int argc, char **argv) {
	new QApplication(argc, argv);
}

QtControllerView::~QtControllerView() {

}

bool QtControllerView::update() {
	window->update(controllerModel->getSnake(), controllerModel->getFood(), controllerModel->getScore());
	qApp->processEvents();
	return true;
}

bool QtControllerView::init(ControllerModelInterface * controller) {
	controllerModel = controller;
	window = new QtNibblerWindow(QPoint(controller->getLimit().getX(), controller->getLimit().getY()));
	QObject::connect(window, SIGNAL(updateDirection(NDirection)), this, SLOT(updateDirection(NDirection)));
	QObject::connect(window, SIGNAL(close()), this, SLOT(close()));
	window->show();
	qApp->processEvents();
	return true;
}

void QtControllerView::close() {
	controllerModel->end(Model::GUI);
}

void QtControllerView::quit(Model::Quit quit) {
	(void) quit;
	if (quit == Model::GAMEOVER) {
		window->showScore(controllerModel->getScore());
	}
	window->hide();
	delete window;
}

void QtControllerView::updateDirection(NDirection direction) {
	controllerModel->updateDirection(direction);
}
