
#include "OutFile.hh"

OutFile::OutFile(std::string filename)
: file(filename.data()) {

}

OutFile::~OutFile() {
	file.flush();
	file.close();
}

OutInterface & OutFile::operator <<(std::string string) {
	file << string << std::endl;
	return *this;
}

OutInterface & OutFile::operator <<(OperandInterface * operand) {
	file << operand->toString() << std::endl;
	return *this;
}
