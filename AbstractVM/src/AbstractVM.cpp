
#include "AbstractVM.hh"

#include <dlfcn.h>
#include <algorithm>
#include <BasicIntruction>
#include <VMDef>
#include "Vm/Memory/Pile.hh"
#include "Vm/IO/OutTerminal.hh"

AbstractVM * AbstractVM::instance = NULL;

AbstractVM::AbstractVM() {
	init();
}

AbstractVM::~AbstractVM() {
	delete lexer;
	delete parser;
	delete core;
	delete pile;
	delete out;
	delete instructionFactory;
	delete operandFactory;
	std::for_each(plugins.begin(), plugins.end(), &dlclose);
}

void AbstractVM::init() {
	initInstruction();
	initOperand();
	initParser();
	initCore();
}

void AbstractVM::initInstruction() {
	instructionFactory = new InstructionFactory();
	instructionFactory->registerInstruction(new InstructionPushHandler());
	instructionFactory->registerInstruction(new InstructionPopHandler());
	instructionFactory->registerInstruction(new InstructionDumpHandler());
	instructionFactory->registerInstruction(new InstructionAssertHandler());
	instructionFactory->registerInstruction(new InstructionAddHandler());
	instructionFactory->registerInstruction(new InstructionSubHandler());
	instructionFactory->registerInstruction(new InstructionMulHandler());
	instructionFactory->registerInstruction(new InstructionDivHandler());
	instructionFactory->registerInstruction(new InstructionModHandler());
	instructionFactory->registerInstruction(new InstructionPrintHandler());
	instructionFactory->registerInstruction(new InstructionExitHandler());
}

void AbstractVM::initOperand() {
	operandFactory = new OperandFactory();
}

void AbstractVM::initParser() {
	lexer = new Lexer();
	parser = new Parser();
	lexer->setComment(VM_COMMENT);
	lexer->addCutter(new BasicCutter("("));
	lexer->addCutter(new BasicCutter(")"));
	ListTokenType * ttoken = new ListTokenType(std::string(VM_TTOKEN_INSTRUCTION));
	ttoken->addListPattern(instructionFactory->getListStringInstructions());
	lexer->addType(ttoken);
	ttoken = new ListTokenType(VM_TTOKEN_OPERAND);
	ttoken->addListPattern(operandFactory->getListStringOperands());
	lexer->addType(ttoken);
}

void AbstractVM::initCore() {
	core = new Core();
	pile = new Pile();
	out = new OutTerminal();
}

Lexer * AbstractVM::getLexer() const {
	return lexer;
}

Parser * AbstractVM::getParser() const {
	return parser;
}

Core * AbstractVM::getCore() const {
	return core;
}

PileInterface * AbstractVM::getPile() const {
	return pile;
}

OutInterface * AbstractVM::getOut() const {
	return out;
}

InstructionFactory * AbstractVM::getInstructionFactory() const {
	return instructionFactory;
}

OperandFactory * AbstractVM::getOperandFactory() const {
	return operandFactory;
}

void AbstractVM::setLexer(Lexer* lexer) {
	if (this->lexer) {
		delete this->lexer;
	}
	this->lexer = lexer;
}

void AbstractVM::setParser(Parser* parser) {
	if (this->parser) {
		delete this->parser;
	}
	this->parser = parser;
}

void AbstractVM::setCore(Core* core) {
	if (this->core) {
		delete this->core;
	}
	this->core = core;
}

void AbstractVM::setPile(PileInterface* pile) {
	if (this->pile) {
		delete this->pile;
	}
	this->pile = pile;
}

void AbstractVM::setOut(OutInterface* out) {
	if (this->out) {
		delete this->out;
	}
	this->out = out;
}

void AbstractVM::setInstructionFactory(InstructionFactory* instructionFactory) {
	if (this->instructionFactory) {
		delete this->instructionFactory;
	}
	this->instructionFactory = instructionFactory;
}

void AbstractVM::setOperandFactory(OperandFactory* operandFactory) {
	if (this->operandFactory) {
		delete this->operandFactory;
	}
	this->operandFactory = operandFactory;
}

void AbstractVM::plugin(std::string plugin) {
	void * handler = dlopen(plugin.data(), RTLD_NOW);
	if (handler) {
		abstractvm_plugin func = (abstractvm_plugin) dlsym(handler, ABSTRACTVM_PLUGIN_FUNCTION);
		if (func) {
			(*func)(this);
			plugins.push_back(handler);
			return;
		}
	}
	throw std::exception();
}

void AbstractVM::executeFile(std::string filename) {
	lexer->executeFromFile(filename);
	parser->execute(lexer->getTokens());
	core->execute();
}

void AbstractVM::executeCin() {

}
