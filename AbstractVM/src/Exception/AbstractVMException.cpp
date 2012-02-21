
#include "AbstractVMException.hh"

AbstractVMException::AbstractVMException(std::string message) throw ()
: message(message) {

}

AbstractVMException::~AbstractVMException() throw () {

}

const char * AbstractVMException::what() const throw() {
	return message.data();
}
