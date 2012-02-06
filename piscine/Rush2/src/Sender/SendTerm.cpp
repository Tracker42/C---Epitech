/**
 *
 *
 *
 */

#include "SendTerm.hh"

SendTerm::SendTerm() {
	out = &std::cout;
}

SendTerm::~SendTerm() {

}

void SendTerm::setOStream(std::ostream * out) {
	this->out = out;
}

bool SendTerm::send(std::string & message) {
	return (bool) (*out << message << std::endl);
}
