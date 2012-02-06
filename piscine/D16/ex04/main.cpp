/**
 *
 *
 *
 */

#include <iostream>

#include "Ratatouille.h"

int main() {

	Ratatouille r;

	r.addSauce("Tomate").addCondiment(42).addSpice(123.321);
	r.addVegetable('x');

	std::cout << "On goute: " << r.kooc() << std::endl;

	r.addSauce("Bolognaise");
	r.addSpice(3.14);

	std::cout << "Va y goute moi ca: " << r.kooc() << std::endl;

	Ratatouille glurp(r);

	glurp.addVegetable('p');
	glurp.addVegetable('o');
	glurp.addSauce("Tartare");

	std::cout << "Et maintenant: " << glurp.kooc() << std::endl;

	r = glurp;
	std::cout << "Je regoute 'est trop bon: " << r.kooc() << std::endl;

	return 0;
}
