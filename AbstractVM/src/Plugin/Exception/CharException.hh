/**
 *
 *
 *
 */

#ifndef __CHAREXCEPTION_HH__
#define	__CHAREXCEPTION_HH__

#include <Exception>

class CharException : public AbstractVMException {
public:
	CharException(std::string message) throw();
	virtual ~CharException() throw();

};

#endif
