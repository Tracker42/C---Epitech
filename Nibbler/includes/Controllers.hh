/**
 *
 *
 *
 */

#ifndef __CONTROLLERS_HH__
#define	__CONTROLLERS_HH__

#include "Model.hh"

#define VIEW_SYMBOL "create_view_controller"

#include "../src/Controller/ControllerModelInterface.hh"
#include "../src/Controller/ControllerViewInterface.hh"

typedef ControllerViewInterface * (*t_load_guilib)(int, char**);

#endif
