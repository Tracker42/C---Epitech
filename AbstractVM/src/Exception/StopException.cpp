
#include "StopException.hh"

StopException::StopException(std::string message) throw()
: AbstractVMException(std::string("Stop : ") + message) {

}

StopException::~StopException() throw() {

}
