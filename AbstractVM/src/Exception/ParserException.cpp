
#include "ParserException.hh"

ParserException::ParserException(std::string message) throw()
: AbstractVMException(std::string("Parser : ") + message) {

}

ParserException::~ParserException() throw() {

}
