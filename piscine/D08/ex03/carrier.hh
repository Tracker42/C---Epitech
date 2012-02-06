/**
 *
 *
 *
 */

#ifndef __CARRIER_H__
#define __CARRIER_H__

#include <string>
#include <iostream>
#include <algorithm>

#include "droid.hh"

#define CARRIER_ENERGY_MAX 600
#define CARRIER_ENERGY_MALUS 10
#define CARRIER_DROIDS_MAX 5
#define CARRIER_SPEED_DEFAULT 100
#define CARRIER_SPEED_MALUS 10

class Carrier {
private:
	std::string id;
	size_t energy;
	size_t const attack;
	size_t const toughness;
	Droid **droids;

	Carrier(Carrier const & copy);

public:
	Carrier(std::string id);
	~Carrier();

	std::string getId() const;
	size_t getEnergy() const;
	size_t getAttack() const;
	size_t getToughness() const;
	size_t getSpeed() const;
	size_t getNbDroids() const;

	void setId(std::string id);
	void setEnergy(size_t energy);

	Droid *&operator[](int position) const;
	bool operator()(int x, int y);
	Carrier &operator<<(size_t &energy);
	Carrier &operator<<(Droid *droid);
	Carrier &operator>>(Droid *droid);
	Carrier &operator~();

};

std::ostream & operator<<(std::ostream &os, Carrier const & carrier);

#endif
