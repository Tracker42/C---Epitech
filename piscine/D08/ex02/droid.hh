/**
 *
 *
 *
 */

#ifndef __DROID_H__
#define __DROID_H__

#include <string>
#include <iostream>
#include <algorithm>

#include "droidmemory.hh"

#define ENERGY_MAX 100

class Droid {
private:
	std::string id;
	size_t energy;
	size_t const attack;
	size_t const toughness;
	std::string *status;
	DroidMemory *battleData;

public:
	Droid(std::string id);
	Droid(Droid const & droid);
	~Droid();

	std::string getId() const;
	size_t getEnergy() const;
	size_t getAttack() const;
	size_t getToughness() const;
	std::string *getStatus() const;
	DroidMemory *getBattleData() const;

	void setId(std::string id);
	void setEnergy(size_t energy);
	void setStatus(std::string *status);
	void setBattleData(DroidMemory *memory);

	Droid& operator=(Droid const & droid);

	bool operator==(Droid const & droid) const;
	bool operator!=(Droid const & droid) const;

	Droid& operator<<(size_t & energy);

	bool operator()(std::string const * task, size_t exp);

private:
	void speak(std::string message);

};

std::ostream & operator<<(std::ostream & os, Droid const & droid);

#endif
