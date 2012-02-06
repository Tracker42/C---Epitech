/**
 *
 *
 *
 */

#include "droidmemory.hh"

DroidMemory::DroidMemory() : exp(0) {
	fingerPrint = random();
}

DroidMemory::~DroidMemory() {

}

size_t DroidMemory::getFingerPrint() const {
	return fingerPrint;
}

size_t DroidMemory::getExp() const {
	return exp;
}

void DroidMemory::setFingerPrint(size_t fingerPrint) {
	this->fingerPrint = fingerPrint;
}

void DroidMemory::setExp(size_t exp) {
	this->exp = exp;
}

void DroidMemory::addExp(size_t exp) {
	this->exp += exp;
}

DroidMemory & DroidMemory::operator <<(DroidMemory const & memory) {
	DroidMemory::fusion(*this, *this, memory);
	return *this;
}

DroidMemory const & DroidMemory::operator >>(DroidMemory & memory) const {
	DroidMemory::fusion(memory, *this, memory);
	return *this;
}

DroidMemory & DroidMemory::operator +=(DroidMemory const & memory) {
	DroidMemory::fusion(*this, *this, memory);
	return *this;
}

DroidMemory & DroidMemory::operator +=(size_t exp) {
	DroidMemory memory;
	memory.exp = exp;
	memory.fingerPrint = exp;
	DroidMemory::fusion(*this, *this, memory);
	return *this;
}

DroidMemory & DroidMemory::operator+(DroidMemory const & memory) const {
	DroidMemory *tmp = new DroidMemory();
	DroidMemory::fusion(*tmp, *this, memory);
	return *tmp;
}

DroidMemory & DroidMemory::operator+(size_t exp) const {
	DroidMemory memory;
	memory.exp = exp;
	memory.fingerPrint = exp;
	DroidMemory *tmp = new DroidMemory();
	DroidMemory::fusion(*tmp, *this, memory);
	return *tmp;
}

bool DroidMemory::operator ==(DroidMemory const & memory) const {
	return exp == memory.exp &&
		fingerPrint == memory.fingerPrint;
}

bool DroidMemory::operator !=(DroidMemory const & memory) const {
	return !(*this == memory);
}

bool DroidMemory::operator <(DroidMemory const & memory) const {
	return exp < memory.exp;
}

bool DroidMemory::operator <=(DroidMemory const & memory) const {
	return exp <= memory.exp;
}

bool DroidMemory::operator >(DroidMemory const & memory) const {
	return exp > memory.exp;
}

bool DroidMemory::operator >=(DroidMemory const & memory) const {
	return exp >= memory.exp;
}

bool DroidMemory::operator <(size_t memory) const {
	return exp < memory;
}

bool DroidMemory::operator <=(size_t memory) const {
	return exp <= memory;
}

bool DroidMemory::operator >(size_t memory) const {
	return exp > memory;
}

bool DroidMemory::operator >=(size_t memory) const {
	return exp >= memory;
}

void DroidMemory::fusion(DroidMemory &dest, DroidMemory const &memory1, DroidMemory const &memory2) {
	dest.exp = memory1.exp + memory2.exp;
	dest.fingerPrint = memory1.fingerPrint ^ memory2.fingerPrint;
}

std::ostream & operator<<(std::ostream & os, DroidMemory const & memory) {
	return os << "Droid Memory '" << memory.getFingerPrint() << "', " << memory.getExp();
}
