/**
 *
 *
 *
 */

#include "Ratatouille.h"

Ratatouille::Ratatouille() {

}

Ratatouille::Ratatouille(const Ratatouille & source) {
	flux.str("");
	flux << source.flux.rdbuf();
}

Ratatouille::~Ratatouille() {

}

Ratatouille & Ratatouille::addVegetable(unsigned char vegetable) {
	flux << vegetable;
	return *this;
}

Ratatouille & Ratatouille::addCondiment(unsigned int condiment) {
	flux << condiment;
	return *this;
}

Ratatouille & Ratatouille::addSpice(double spice) {
	flux << spice;
	return *this;
}

Ratatouille & Ratatouille::addSauce(std::string sauce) {
	flux << sauce;
	return *this;
}

std::string Ratatouille::kooc() {
	return flux.str();
}

Ratatouille & Ratatouille::operator =(const Ratatouille& source) {
	flux.str("");
	flux << source.flux.rdbuf();
	return *this;
}
