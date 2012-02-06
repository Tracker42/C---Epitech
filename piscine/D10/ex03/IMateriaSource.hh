/**
 *
 *
 *
 */

#ifndef __IMATERIASOURCE_H__
#define __IMATERIASOURCE_H__

#include <string>

class IMateriaSource {
protected:

public:
	virtual ~IMateriaSource() {}

	virtual void learnMateria(AMateria *materia) = 0;
	virtual AMateria * createMateria(std::string const & type) = 0;

};

#endif
