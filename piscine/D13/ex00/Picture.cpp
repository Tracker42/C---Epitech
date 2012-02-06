/**
 *
 *
 *
 */

#include <sstream>

#include "Picture.h"

Picture::Picture()
: data("") {

}

Picture::Picture(const std::string& filename) {
	getPictureFromFile(filename);
}

Picture::~Picture() {

}

bool Picture::getPictureFromFile(const std::string & filename) {
	std::ifstream is(filename.data());
	if (is.is_open()) {
		std::stringstream buffer;
		buffer << is.rdbuf();
		data = buffer.str();
		is.close();
		return true;
	}
	data = "ERROR";
	return false;
}

Picture & Picture::operator=(Picture const & picture) {
	data = picture.data;
	return *this;
}
