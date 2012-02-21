
#include "CharException.hh"

CharException::CharException(std::string message) throw()
: AbstractVMException(std::string("Operand char : ") + message) {

}

CharException::~CharException() throw() {

}
