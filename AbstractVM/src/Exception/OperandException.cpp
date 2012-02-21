
#include "OperandException.hh"

OperandException::OperandException(std::string message) throw()
: AbstractVMException(std::string("Operand : ") + message) {

}

OperandException::~OperandException() throw() {

}
