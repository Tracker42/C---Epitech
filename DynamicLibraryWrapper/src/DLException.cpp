
#include "DLException.hh"

DLException::DLException(const std::string & message) throw ()
: message(message) {

}

DLException::~DLException() throw () {

}

const char * DLException::what() const throw () {
	return (std::string("Error to 'DynamicLibraryWrapper' : ") + message).data();
}
