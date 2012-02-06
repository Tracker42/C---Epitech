/**
 *
 *
 *
 */

#ifndef __FRUIT_H__
#define __FRUIT_H__

#include <string>
#include <iostream>

class Fruit {
protected:
	std::string name;
	int _vitamins;

	Fruit();
	Fruit(std::string const name, int vitamins);

public:
	virtual ~Fruit();

	std::string const & getName() const;
	int getVitamins() const;

};

#endif
