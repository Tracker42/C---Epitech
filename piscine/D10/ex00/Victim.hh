/**
 *
 *
 *
 */

#ifndef __VICTIM_H__
#define __VICTIM_H__

#include <string>
#include <iostream>

class Victim {
protected:
	std::string name;

public:
	Victim(std::string name);
	virtual ~Victim();

	virtual std::string getName() const;

	virtual void getPolymorphed() const;

};

std::ostream & operator<<(std::ostream & os, Victim & victim);

#endif
