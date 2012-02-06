/**
 *
 *
 *
 */

#include "Character.hh"

Character::Character(std::string const & name)
: name(name) {
	int i;
	for (i = 0; i < 4; i++) {
		slots[i] = NULL;
	}
}

Character::Character(Character const & perso) {
	name = perso.name;
	int i;
	for (i = 0; i < 4; i++) {
		if (slots[i]) {
			delete slots[i];
		}
		slots[i] = NULL;
		if (perso.slots[i]) {
			slots[i] = perso.slots[i]->clone();
		}
	}
}

Character::~Character() {
	int i;
	for(i = 0; i < 4; i++) {
		if (slots[i]) {
			//delete slots[i];
		}
	}
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* materia) {
	if (materia) {
		int i;
		for(i = 0; i < 4; i++) {
			if (slots[i] == NULL) {
				slots[i] = materia;
				return;
			}
		}
	}
}

void Character::unequip(int index) {
	if (index >= 0 && index < 4) {
		slots[index] = NULL;
	}
}

void Character::use(int index, ICharacter& target) {
	if (index >= 0 && index < 4 && slots[index] != NULL) {
		slots[index]->use(target);
	}
}
