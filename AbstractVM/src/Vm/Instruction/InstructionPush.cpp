
#include "InstructionPush.hh"

InstructionPush::InstructionPush() {

}

InstructionPush::~InstructionPush() {

}

void InstructionPush::operator ()(Core * core) {
  core->getMemory()->push(nb); // nb a chercher
}
