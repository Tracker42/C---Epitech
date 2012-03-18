/**
 *
 *
 *
 */

#ifndef	__SDL_CORE_HH__
#define	__SDL_CORE_HH__

#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include "Sdl.hh"

class Sdl_Core : public ControllerViewInterface {
protected:
	std::map<std::string, SDL_Surface *> surf;
	ControllerModelInterface *controller;

public:
	Sdl_Core();
	virtual ~Sdl_Core();

	virtual bool update();
	virtual bool init(ControllerModelInterface * controller);

	virtual void quit(NQuit quit);

};

void freeSurface(std::map<std::string, SDL_Surface *>::reference pair);

#endif
