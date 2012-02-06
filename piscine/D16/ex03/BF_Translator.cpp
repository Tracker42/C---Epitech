/**
 *
 *
 *
 */

#include "BF_Translator.h"

BF_Translator::BF_Translator() {
	commands['+'] = &BF_Translator::command_inc;
	commands['-'] = &BF_Translator::command_desc;
	commands['>'] = &BF_Translator::command_next;
	commands['<'] = &BF_Translator::command_prev;
	commands['.'] = &BF_Translator::command_write;
	commands[','] = &BF_Translator::command_read;
	commands['['] = &BF_Translator::command_jump;
	commands[']'] = &BF_Translator::command_back;
}

BF_Translator::~BF_Translator() {

}

int BF_Translator::translate(std::string in, std::string out) {
	try {
		this->in.open(in.data(), std::ios::in);
		this->out.open(out.data(), std::ios::trunc | std::ios::out);
		if (!this->in.is_open() || !this->out.is_open()) {
			throw std::exception();
		}
		bf_command command;
		header();
		while (!this->in.eof()) {
			char c = this->in.get();
			command = commands[c];
			if (command) {
				(this->*command)();
			}
			else if (!isspace(c) && c != -1) {
				throw std::exception();
			}
		}
		footer();
		this->out.flush();
		this->in.close();
		this->out.close();
	}
	catch (std::exception & e) {
		this->in.close();
		this->out.close();
		return -1;
	}
	return 0;
}

void BF_Translator::header() {
	out
		<< "#include <stdlib.h>\n"
		<< "#include <string.h>"
		<< "\n"
		<< "#define MEMORY_MAX 60*1024\n"
		<< "\n"
		<< "int main() {\n"
		<< " char memory[MEMORY_MAX];\n"
		<< " unsigned int cursor = 0;\n"
		<< "memset(memory, 0, MEMORY_MAX);\n"
		<< "\n";
}

void BF_Translator::footer() {
	out
		<< "}\n";
}

void BF_Translator::command_inc() {
	out << "memory[cursor]++;\n";
}

void BF_Translator::command_desc() {
	out << "memory[cursor]--;\n";
}

void BF_Translator::command_next() {
	out << "cursor++;\n";
}

void BF_Translator::command_prev() {
	out << "cursor--;\n";
}

void BF_Translator::command_write() {
	out << "write(1, &memory[cursor], 1);\n";
}

void BF_Translator::command_read() {
	out << "read(0, &memory[cursor], 1);\n";
}

void BF_Translator::command_jump() {
	out << "while (memory[cursor]) {\n";
}

void BF_Translator::command_back() {
	out << "}\n";
}
