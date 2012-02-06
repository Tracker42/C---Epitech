/**
 *
 *
 *
 */

#include "LittleHand.h"

void LittleHand::sortCagette(Cagette& vrac, Cagette& citrons, Cagette& bananas, Cagette& citronVerts) {
	Fruit * fruit;
	Cagette tmp(vrac.nbFruits());
	while ((fruit = vrac.pickFruit())) {
		tmp.putFruit(fruit);
	}
	while ((fruit = tmp.pickFruit())) {
		if (fruit->getVitamins() == 5) {
			bananas.putFruit(fruit);
		}
		else if (fruit->getVitamins() == 3) {
			citrons.putFruit(fruit);
		}
		else if (fruit->getVitamins() == 2) {
			citronVerts.putFruit(fruit);
		}
		else {
			vrac.putFruit(fruit);
		}
	}
}

Cagette * const * LittleHand::organizeCoconut(Fruit const * const * coconuts_paquet) {
	int max = 6;
	int i = 0;
	int count = 0;
	int index;
	while (coconuts_paquet[count++]);
	count--;
	Cagette ** cagettes = new Cagette*[count / max + 2];
	cagettes[count / max + 1] = NULL;
	while (i < count) {
		index = i % max;
		if (!index) {
			cagettes[index] = new Cagette(max);
		}
		index = i / max;
		cagettes[index]->putFruit(const_cast<Fruit *>(const_cast<Fruit * const *>(coconuts_paquet)[i]));
		i++;
	}
	return cagettes;
}
