
#include "SyntaxException.hh"

SyntaxException::SyntaxException(std::string message) throw()
: AbstractVMException(std::string("Syntax : ") + message) {

}

SyntaxException::~SyntaxException() throw() {

}
