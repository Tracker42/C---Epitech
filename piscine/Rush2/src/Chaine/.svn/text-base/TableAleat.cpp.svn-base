/**
 *
 *
 *
 */

#include <stdlib.h>

#include "TableAleat.hh"

TableAleat::TableAleat() {
	createTable(10);
	generate();
}

TableAleat::~TableAleat() {

}

void TableAleat::generate() {
	int i;
	int random;
	Objet * objet;
	for (i = 0; i < size; i++) {
		random = rand() % 4;
		if (i == 0) {
			objet = new PapierCadeau();
		}
		else if (i == 1) {
			objet = new Carton();
		}
		else if (i == 2) {
			objet = new Nounours(getRandomName());
		}
		else if (i == 3) {
			objet = new PetitPoney(getRandomName());
		}
		table[i] = objet;
	}
	count = size;
}

std::string TableAleat::getRandomName() {
	std::string names[] = {
		"Falcon crusher",
		"Pedo bears",
		"Princess Molestia",
		"frizac_b",
		"Koala",
		"Elmout",
		"Hitler",
		"Augusto",
		"Mao",
		"Cloud",
		"cottin_j",
		"sans nom",
		"anon"
	};
	return names[rand() % 13];
}
