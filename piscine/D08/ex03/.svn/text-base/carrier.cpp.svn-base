/**
 *
 *
 *
 */

#include "carrier.hh"

Carrier::Carrier(std::string id) : id(id), energy(300), attack(100), toughness(90) {
	droids = new Droid*[CARRIER_DROIDS_MAX];
	int i;
	for (i = 0; i < CARRIER_DROIDS_MAX; i++) {
		droids[i] = NULL;
	}
}

Carrier::~Carrier() {
	int i;
	for (i = 0; i < CARRIER_DROIDS_MAX; i++) {
		if (droids[i]) {
			delete droids[i];
		}
	}
}

std::string Carrier::getId() const {
	return id;
}

size_t Carrier::getEnergy() const {
	return energy;
}

size_t Carrier::getAttack() const {
	return attack;
}

size_t Carrier::getToughness() const {
	return toughness;
}

size_t Carrier::getSpeed() const {
	int count = getNbDroids();
	if (count) {
		return CARRIER_SPEED_DEFAULT - count * CARRIER_SPEED_MALUS;
	}
	return 0;
}

size_t Carrier::getNbDroids() const {
	int count = 0;
	int i;
	for (i = 0; i < CARRIER_DROIDS_MAX; i++) {
		if (droids[i]) {
			count++;
		}
	}
	return count;
}

void Carrier::setId(std::string id) {
	this->id = id;
}

void Carrier::setEnergy(size_t energy) {
	this->energy = energy;
}

Droid *&Carrier::operator[](int position) const {
	return droids[position];
}

bool Carrier::operator()(int x, int y) {
	size_t cost = (std::abs(x) + std::abs(y)) * (CARRIER_ENERGY_MALUS + getNbDroids());
	if (cost < energy) {
		energy -= cost;
		if (getSpeed() != 0) {
			return true;
		}
	}
	else {
		energy = 0;
	}
	return false;
}

Carrier &Carrier::operator <<(size_t& energy) {
	if (this->energy < CARRIER_ENERGY_MAX) {
		int take = std::min(CARRIER_ENERGY_MAX - this->energy, energy);
		this->energy += take;
		energy -= take;
	}
	return *this;
}

Carrier &Carrier::operator <<(Droid* droid) {
	int i;
	for (i = 0; i < CARRIER_DROIDS_MAX; i++) {
		if (!droids[i]) {
			droids[i] = droid;
			return *this;
		}
	}
	return *this;
}

Carrier &Carrier::operator >>(Droid* droid) {
	int i;
	for (i = 0; i < CARRIER_DROIDS_MAX; i++) {
		if (droids[i]) {
			droid = droids[i];
			droids[i] = NULL;
			return *this;
		}
	}
	return *this;
}

Carrier &Carrier::operator ~() {
	return *this;
}

std::ostream & operator<<(std::ostream &os, Carrier const & carrier) {
	os << "Carrier '" << carrier.getId() << "' Droid(s) on-board:" << std::endl;
	int i;
	for (i = 0; i < CARRIER_DROIDS_MAX; i++) {
		os << "[" << i << "] : ";
		if (carrier[i]) {
			os << carrier[i];
		}
		else {
			os << "Free";
		}
		os << std::endl;
	}
	return os;
}
