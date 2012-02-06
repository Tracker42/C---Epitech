/**
 *
 *
 *
 */

#include "Cagette.h"

Cagette::Cagette(int size)
: size(size), header(NULL) {
}

Cagette::~Cagette() {

}

int Cagette::nbFruits() const {
	return count;
}

FruitNode * Cagette::head() const {
	return header;
}

bool Cagette::putFruit(Fruit * fruit) {
	if (count < size) {
		FruitNode * current = header;
		FruitNode * node = new FruitNode();
		node->content = fruit;
		if (!header) {
			header = node;
		}
		else {
			while (current->next) {
				if (current->content == fruit) {
					return false;
				}
				current = current->next;
			}
			current->next = node;
		}
		count++;
		return true;
	}
	return false;
}

Fruit * Cagette::pickFruit() {
	if (count) {
		Fruit * fruit = header->content;
		FruitNode * del = header;
		header = header->next;
		delete del;
		count--;
		return fruit;
	}
	return NULL;
}
