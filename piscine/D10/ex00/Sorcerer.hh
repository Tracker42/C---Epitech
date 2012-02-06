/**
 *
 *
 *
 */

#ifndef __SORCERER_H__
#define __SORCERER_H__

#include <string>
#include <iostream>

#include "Victim.hh"

class Sorcerer {
protected:
	std::string name;
	std::string title;

	virtual void speak(std::string message);

public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();

	std::string getName() const;
	std::string getTitle() const;

	virtual void polymorph(Victim const & civil) const;

};

std::ostream & operator<<(std::ostream & os, Sorcerer & sorcerer);

#endif
