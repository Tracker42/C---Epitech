/**
 *
 *
 *
 */

#ifndef __CONTROLLERMODEL_HH__
#define	__CONTROLLERMODEL_HH__

#include <string>
#include <iostream>
#include <ctime>
#include <sys/time.h>

#include "Model.hh"
#include "Controllers.hh"
#include "Common.hh"
#include "DlWrapper.hh"

#include "../Nibbler/Nibbler.hh"

class ControllerModel : public ControllerModelInterface {
protected:
	ControllerViewInterface * controllerView;
	Nibbler * nibbler;
	NQuit quit;

public:
	ControllerModel();
	virtual ~ControllerModel();

	virtual bool init(int argc, char **argv);
	virtual int execute();
	virtual void end(NQuit quit);

	virtual void updateDirection(NDirection direction);
	virtual const Snake & getSnake() const;
	virtual const Food & getFood() const;
	virtual const Point & getLimit() const;
	virtual int getScore() const;

};

#endif
