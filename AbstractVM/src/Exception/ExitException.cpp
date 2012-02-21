
#include "ExitException.hh"

ExitException::ExitException() throw()
: StopException(std::string("Exit")) {

}

ExitException::~ExitException() throw() {

}
