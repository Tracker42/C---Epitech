/**
 *
 *
 *
 */

#include <string>
#include <iostream>

#include "ex03/AMateria.hh"
#include "ex03/ICharacter.hh"
#include "ex03/IMateriaSource.hh"
#include "ex03/Character.hh"
#include "ex03/Cure.hh"
#include "ex03/Ice.hh"
#include "ex03/MateriaSource.hh"

using namespace std;

int main() {

	Character *me = new Character("Phenix");
	MateriaSource *source = new MateriaSource();

	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	me->equip(source->createMateria("ice"));
	me->equip(source->createMateria("cure"));

	me->use(0, *me);

	Character b("Copy");
	b = *me;

	delete me;
	cout << "Deleted" << endl;
	b.use(1, b);
	cout << "Used" << endl;

}