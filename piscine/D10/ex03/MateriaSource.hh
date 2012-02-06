/**
 *
 *
 *
 */

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include <string>
#include <iostream>

#include "AMateria.hh"
#include "IMateriaSource.hh"

class MateriaSource : public IMateriaSource {
protected:
	AMateria *slots[4];

public:
	MateriaSource();
	~MateriaSource();

	virtual void learnMateria(AMateria *materia);
	virtual AMateria * createMateria(std::string const & type);
};

#endif
