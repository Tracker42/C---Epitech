
#include <iostream>
#include <fstream>

#include <Token>
#include <Lexer>

int main(int argc, char **argv) {
	(void) argc;
	Lexer * lexer = new Lexer();
	lexer->setComment(";;");
	lexer->addCutter(new BasicCutter("("));
	lexer->addCutter(new BasicCutter(")"));
	lexer->addType(new BasicTokenType("open_parenthese", "("));
	lexer->addType(new BasicTokenType("close_parenthese", ")"));
	ListTokenType * instr = new ListTokenType("intruction");
	instr->addPattern("push");
	instr->addPattern("pop");
	instr->addPattern("dump");
	instr->addPattern("assert");
	instr->addPattern("add");
	instr->addPattern("sub");
	instr->addPattern("mul");
	instr->addPattern("div");
	instr->addPattern("mod");
	instr->addPattern("print");
	instr->addPattern("exit");
	lexer->addType(instr);
	ListTokenType * type = new ListTokenType("data_type");
	type->addPattern("int8");
	type->addPattern("int16");
	type->addPattern("int32");
	type->addPattern("float");
	type->addPattern("double");
	lexer->addType(type);
	std::ifstream file(argv[1]);
	lexer->execute(file);

	std::list<Token *> tokens = lexer->getTokens();
	std::list<Token *>::iterator iter = tokens.begin();
	while (iter != tokens.end()) {
		std::cout << (*iter)->getType() << " : " << (*iter)->getValue() << std::endl;
		iter++;
	}
}
