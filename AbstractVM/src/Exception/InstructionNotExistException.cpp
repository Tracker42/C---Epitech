
#include "InstructionNotExistException.hh"

InstructionNotExistException::InstructionNotExistException(std::string message) throw()
: AbstractVMException(std::string("Instruction not exist : ") + message) {

}

InstructionNotExistException::~InstructionNotExistException() throw() {

}

