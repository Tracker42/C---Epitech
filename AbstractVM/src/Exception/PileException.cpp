
#include "PileException.hh"

PileException::PileException(std::string message) throw ()
: AbstractVMException(std::string("Pile ") + message) {

}

PileException::~PileException() throw () {

}
