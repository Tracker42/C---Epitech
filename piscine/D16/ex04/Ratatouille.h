/**
 *
 *
 *
 */

#ifndef __RATATOUILLE_H__
#define	__RATATOUILLE_H__

#include <string>
#include <sstream>

class Ratatouille {
protected:
	std::stringstream flux;

public:
	Ratatouille();
	Ratatouille(const Ratatouille & source);
	virtual ~Ratatouille();

	Ratatouille & addVegetable(unsigned char vegetable);
	Ratatouille & addCondiment(unsigned int condiment);
	Ratatouille & addSpice(double spice);
	Ratatouille & addSauce(std::string sauce);

	std::string kooc();

	Ratatouille & operator=(const Ratatouille & source);

};

#endif
