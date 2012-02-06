/**
 *
 *
 *
 */

#ifndef __WOODY_H__
#define __WOODY_H__

#include <string>
#include <iostream>

#include "Toy.h"

class Woody : public Toy {
protected:

public:
	Woody(std::string const & name, std::string const & filename = "woody.txt");
	Woody(Woody const & woody);
	virtual ~Woody();

	virtual bool speak(std::string const message);

};

#endif
