
#include "OverflowException.hh"

OverflowException::OverflowException(std::string message) throw()
: AbstractVMException(std::string("Overflow : ") + message) {

}

OverflowException::~OverflowException() throw() {

}
