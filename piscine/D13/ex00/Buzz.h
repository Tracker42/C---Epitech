/**
 *
 *
 *
 */

#ifndef __BUZZ_H__
#define __BUZZ_H__

#include <string>
#include <iostream>

#include "Toy.h"

class Buzz : public Toy {
protected:

public:
	Buzz(std::string const & name, std::string const & filename = "buzz.txt");
	Buzz(Buzz const & buzz);
	virtual ~Buzz();

	virtual bool speak(std::string const message);
	virtual bool speak_es(std::string const message);

};

#endif
