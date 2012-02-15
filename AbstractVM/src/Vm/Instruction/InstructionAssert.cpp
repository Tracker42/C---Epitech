
#include "InstructionAssert.hh"

InstructionAssert::InstructionAssert() {

}

InstructionAssert::~InstructionAssert() {

}

void InstructionAssert::operator ()(Core * core) {
  core->getMemory()->assert(nb); //nb a chercher
}
