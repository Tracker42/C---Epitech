
#include "SyntaxAnalyzer.hh"

#include <AbstractVM>
#include <Exception>
#include <VMDef>

SyntaxAnalyzer::SyntaxAnalyzer() {

}

SyntaxAnalyzer::~SyntaxAnalyzer() {

}

void SyntaxAnalyzer::addTokenType(TokenTypeInterface* type) {
	sort.push_back(type);
}

bool SyntaxAnalyzer::match(std::list<Token *>::iterator begin, std::list<Token *>::iterator end) {
	if (begin == end) {
		if (sort.size() == 1 && (*(sort.begin()))->match((*begin)->getValue())) {
			return true;
		}
		return false;
	}
	else {
		std::list<TokenTypeInterface *>::iterator iter = sort.begin();
		while (begin != end) {
			if (iter == sort.end()) {
				return false;
			}
			if (!(*iter)->match((*begin)->getValue())) {
				return false;
			}
			begin++;
			iter++;
		}
		return true;
	}
}

InstructionInterface * SyntaxAnalyzer::create(std::list<Token *>::iterator begin, std::list<Token *>::iterator end) {
	InstructionInterface * instr = AbstractVM::getInstance()->getInstructionFactory()->createInstruction((*begin)->getValue());
	instr->initialize();
	if (begin != end) {
		begin++;
		instr->addParam((*begin)->getValue());
		begin++;
		begin++;
		instr->addParam((*begin)->getValue());
	}
	instr->finalize();
	return instr;
	/**Old**/
	if ((*begin)->getType() == VM_TTOKEN_INSTRUCTION) {
		instr->initialize();
		if (begin != end) {
			begin++;
			while (begin != end) {
				if ((*begin)->getType() != VM_TTOKEN_OPERAND || (*begin)->getType() != VM_TTOKEN_DATA) {
					instr->addParam((*begin)->getValue());
				}
				begin++;
			}
		}
		instr->finalize();
		return instr;
	}
	throw SyntaxException(std::string("Syntax : ") + (*begin)->getType() + " / " + (*begin)->getValue());
}
