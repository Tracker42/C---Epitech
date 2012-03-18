/**
 *
 *
 *
 */

#ifndef __CONTROLLERVIEW_HH__
#define	__CONTROLLERVIEW_HH__

class ControllerViewInterface;

#include "ControllerModelInterface.hh"

class ControllerViewInterface {
protected:

public:
	virtual bool update() = 0;
	virtual bool init(ControllerModelInterface * controller) = 0;
	virtual void quit(NQuit quit) = 0;

};

#endif
