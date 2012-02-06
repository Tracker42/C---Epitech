/**
 *
 *
 *
 */

#include "MateriaSource.hh"

MateriaSource::MateriaSource() {
	int i;
	for(i = 0; i < 4; i++) {
		slots[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	int i;
	for(i = 0; i < 4; i++) {
		if (slots[i]) {
			delete slots[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (materia) {
		int i;
		for (i = 0; i < 4; i++) {
			if (!slots[i]) {
				slots[i] = materia;
				return;
			}
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type) {
	int i;
	for (i = 0; i < 4; i++) {
		if (slots[i] && slots[i]->getType() == type) {
			return slots[i]->clone();
		}
	}
	return NULL;
}
