/**
 *
 *
 *
 */

#include "Woody.h"

Woody::Woody(std::string const & name, std::string const & filename)
: Toy(WOODY, name, filename) {

}

Woody::Woody(const Woody & woody)
: Toy(woody) {

}

Woody::~Woody() {

}

bool Woody::speak(const std::string message) {
	std::cout << "WOODY: ";
	return Toy::speak(message);
}
