/**
 *
 *
 *
 */

#include <iostream>

#include "Controllers.hh"
#include "Controller/ControllerModel.hh"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage: nibbler <nbre colonnes> <nbre lignes> <librairie dynamique>" << std::endl;
		return 0;
	}
	ControllerModel * controller = new ControllerModel();
	if (!controller->init(argc, argv)) {
		return EXIT_FAILURE;
	}
	controller->execute();
	delete controller;
	return EXIT_SUCCESS;
}
