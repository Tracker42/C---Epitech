
#include "OperandNotExistException.hh"

OperandNotExistException::OperandNotExistException(std::string message) throw ()
: AbstractVMException(std::string("Operand not exist : ") + message) {

}

OperandNotExistException::~OperandNotExistException() throw () {

}

