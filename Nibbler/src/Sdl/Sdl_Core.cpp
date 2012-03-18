
#include "Sdl_Core.hh"

Sdl_Core::Sdl_Core() {

}

Sdl_Core::~Sdl_Core() {

}

static void checkKeyPress(ControllerModelInterface * controller) {
	SDL_Event event;

	SDL_PollEvent(&event);
	if (event.type == SDL_KEYDOWN) {
		switch (event.key.keysym.sym) {
			case SDLK_UP:
				controller->updateDirection(Model::UP);
				break;
			case SDLK_DOWN:
				controller->updateDirection(Model::DOWN);
				break;
			case SDLK_LEFT:
				controller->updateDirection(Model::LEFT);
				break;
			case SDLK_RIGHT:
				controller->updateDirection(Model::RIGHT);
				break;
			default: break;
		}
	}
	else if (event.type == SDL_QUIT) {
		controller->end(Model::GUI);
	}
	while (SDL_PollEvent(&event));
}

bool Sdl_Core::update() {
	int i;
	const Snake * snake = &controller->getSnake();
	SDL_Rect tile = {controller->getFood().getX() * TILE_SIZE, controller->getFood().getY() * TILE_SIZE, TILE_SIZE, TILE_SIZE};
	SDL_BlitSurface(surf["blank"], NULL, surf["screen"], NULL);
	SDL_BlitSurface(surf["fruit"], NULL, surf["screen"], &tile);
	for (i = 0; i < snake->getSize(); ++i) {
		tile.x = (*snake)[i].getX() * TILE_SIZE;
		tile.y = (*snake)[i].getY() * TILE_SIZE;
		SDL_BlitSurface(surf["body"], NULL, surf["screen"], &tile);
	}
	SDL_Flip(surf["screen"]);
	checkKeyPress(controller);
	return true;
}

bool Sdl_Core::init(ControllerModelInterface* controller) {
	this->controller = controller;
	if (SDL_Init(SDL_INIT_VIDEO) == -1) {
		return false;
	}
	surf["body"] = SDL_LoadBMP(RES_BODY);
	surf["fruit"] = SDL_LoadBMP(RES_FRUIT);
	surf["screen"] = SDL_SetVideoMode(controller->getLimit().getX() * TILE_SIZE, controller->getLimit().getY() * TILE_SIZE,
		32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	surf["blank"] = SDL_ConvertSurface(surf["screen"], surf["screen"]->format, surf["screen"]->flags);
	return true;
}

void Sdl_Core::quit(NQuit quit) {
	(void) quit;
	std::for_each(surf.begin(), surf.end(), &freeSurface);
	surf.clear();
	SDL_Quit();
}

void freeSurface(std::map<std::string, SDL_Surface *>::reference pair) {
	SDL_FreeSurface(pair.second);
}

extern "C" {

	ControllerViewInterface * create_view_controller(int argc, char **argv) {
		(void) argc;
		(void) argv;
		std::cout << "Chargement de la librairie Sdl." << std::endl;
		return new Sdl_Core();
	}
}
