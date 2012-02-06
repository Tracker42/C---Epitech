/**
 *
 *
 *
 */

#include "Toy.h"

Toy::Toy()
: type(BASIC_TOY), name("toy") {

}

Toy::Toy(ToyType type, std::string const & name, std::string const & ascii)
: type(type), name(name), picture(ascii) {

}

Toy::Toy(Toy const & toy)
: type(toy.type), name(toy.name), picture(toy.picture) {

}

Toy::~Toy() {

}

int Toy::getType() const {
	return type;
}

std::string const & Toy::getName() const {
	return name;
}

std::string const & Toy::getAscii() const {
	return picture.data;
}

void Toy::setName(std::string const & name) {
	this->name = name;
}

bool Toy::setAscii(std::string const & ascii) {
	if (!picture.getPictureFromFile(ascii)) {
		error.setType(Error::PICTURE);
		return false;
	}
	return true;
}

bool Toy::speak(const std::string message) {
	std::cout << name << " \"" << message << "\"" << std::endl;
	return true;
}

bool Toy::speak_es(const std::string message) {
	(void) message;
	error.setType(Error::SPEAK);
	return false;
}

Toy::Error const & Toy::getLastError() const {
	return error;
}

Toy & Toy::operator =(Toy const & toy) {
	type = toy.type;
	name = toy.name;
	picture = toy.picture;
	return *this;
}

Toy & Toy::operator<<(std::string const & ascii) {
	picture.data = ascii;
	return *this;
}

Toy::Error::Error()
: type(UNKNOWN) {

}

void Toy::Error::setType(ErrorType type) {
	this->type = type;
}

std::string Toy::Error::what() const {
	if (type == PICTURE) {
		return "bad new illustration";
	}
	else if (type == SPEAK) {
		return "wrong mode";
	}
	else {
		return "";
	}
}

std::string Toy::Error::where() const {
	if (type == PICTURE) {
		return "setAscii";
	}
	else if (type == SPEAK) {
		return "speak_es";
	}
	else {
		return "";
	}
}

std::ostream & operator<<(std::ostream & os, Toy const & toy) {
	return os << toy.getName() << std::endl << toy.getAscii() << std::endl;
}
