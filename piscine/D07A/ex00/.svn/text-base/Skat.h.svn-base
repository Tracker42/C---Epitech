/**
 *
 *
 *
 */

#ifndef __SKAT_H__
#define __SKAT_H__

#include <string>
#include <iostream>

class Skat {
private:
	std::string const& _name;
	int& _stimPacks;

public:
	Skat(std::string const& name, int stimPacks);
	~Skat();

	int& stimPaks();
	std::string const& name();

	void shareStimPaks(int number, int& stock);
	void addStimPaks(unsigned int number);
	void useStimPaks();

	void status() const;

};

#endif
