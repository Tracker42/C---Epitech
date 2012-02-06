/**
 *
 *
 *
 */

#ifndef __TOYSTORY_H__
#define __TOYSTORY_H__

#include <string>
#include <fstream>

#include "Toy.h"

typedef bool (Toy::*toy_speak)(std::string const message);

class ToyStory {
protected:

public:
	ToyStory();
	~ToyStory();

	static bool tellMeAStory(std::string const & filename, Toy & character1, toy_speak speak1, Toy & character2, toy_speak speak2);

};

#endif
