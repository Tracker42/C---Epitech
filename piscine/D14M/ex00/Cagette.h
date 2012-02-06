/**
 *
 *
 *
 */

#ifndef __CAGETTE_H__
#define	__CAGETTE_H__

#include <string>
#include <iostream>

#include "Fruit.h"
#include "FruitNode.h"

class Cagette {
protected:
	int size;
	int count;
	FruitNode * header;

public:
	Cagette(int size);
	virtual ~Cagette();

	int nbFruits() const;
	FruitNode * head() const;

	bool putFruit(Fruit * fruit);
	Fruit * pickFruit();

};

#endif
