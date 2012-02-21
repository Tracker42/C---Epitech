/**
 *
 *
 *
 */

#ifndef __ABSTRACTVM_HH__
#define	__ABSTRACTVM_HH__

#include <string>
#include <iostream>

#include <Lexer>
#include <Parser>
#include <Token>
#include <Instruction>
#include <Operand>
#include <Core>
#include <VMDef>

class AbstractVM {
protected:
	static AbstractVM * instance;

	Lexer * lexer;
	Parser * parser;

	Core * core;
	PileInterface * pile;
	OutInterface * out;

	InstructionFactory * instructionFactory;
	OperandFactory * operandFactory;

	std::list<void *> plugins;

	AbstractVM();
	virtual ~AbstractVM();

	void init();
	void initInstruction();
	void initOperand();
	void initParser();
	void initCore();

public:
	static AbstractVM * getInstance();
	static void destroy();

	Lexer * getLexer() const;
	Parser * getParser() const;

	Core * getCore() const;
	PileInterface * getPile() const;
	OutInterface * getOut() const;

	InstructionFactory * getInstructionFactory() const;
	OperandFactory * getOperandFactory() const;

	void setLexer(Lexer * lexer);
	void setParser(Parser * parser);

	void setCore(Core * core);
	void setPile(PileInterface * pile);
	void setOut(OutInterface * out);

	void setInstructionFactory(InstructionFactory * instructionFactory);
	void setOperandFactory(OperandFactory * operandFactory);

	void plugin(std::string plugin);

	void execute(std::istream & flux);

};

extern "C" {
	typedef void (*abstractvm_plugin_func)(AbstractVM *);
}

#endif
