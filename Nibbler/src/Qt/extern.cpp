/**
 *
 *
 *
 */

#include "QtControllerView.hh"

#include <iostream>

extern "C" {

	ControllerViewInterface * create_view_controller(int argc, char ** argv) {
		std::cout << "Chargement de la librairie Qt." << std::endl;
		return new QtControllerView(argc, argv);
	}

}
