/**
 *
 *
 *
 */

#include "Buzz.h"

Buzz::Buzz(std::string const & name, std::string const & filename)
: Toy(BUZZ, name, filename) {

}

Buzz::Buzz(Buzz const & buzz)
: Toy(buzz) {

}

Buzz::~Buzz() {

}

bool Buzz::speak(const std::string message) {
	std::cout << "BUZZ: ";
	return Toy::speak(message);
}

bool Buzz::speak_es(const std::string message) {
	std::cout << "BUZZ: " << name << " senorita \"" << message << "\" senorita" << std::endl;
	return true;
}
