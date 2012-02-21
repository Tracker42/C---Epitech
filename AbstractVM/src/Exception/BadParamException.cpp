
#include "BadParamException.hh"

BadParamException::BadParamException(std::string message) throw()
: AbstractVMException(std::string("Bad Param : ") + message) {

}

BadParamException::~BadParamException() throw() {

}
