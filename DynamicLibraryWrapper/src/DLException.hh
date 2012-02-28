/**
 *
 *
 *
 */

#ifndef __DLEXCEPTION_HH__
#define	__DLEXCEPTION_HH__

#include <string>
#include <exception>

class DLException : public std::exception {
protected:
	std::string message;

public:
	DLException(const std::string & message = "") throw();
	virtual ~DLException() throw();

	virtual const char * what() const throw();

};

#endif
