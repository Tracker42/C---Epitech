/**
 *
 *
 *
 */

#ifndef ABSTRACTVMEXCEPTION_HH
#define	ABSTRACTVMEXCEPTION_HH

#include <string>
#include <exception>

class AbstractVMException : public std::exception {
protected:
	std::string message;

public:
	AbstractVMException(std::string message = "") throw ();
	virtual ~AbstractVMException() throw ();

	virtual const char* what() const throw();

};

#endif
