/**
 *
 *
 *
 */

#ifndef __BF_TRANSLATOR_H__
#define	__BF_TRANSLATOR_H__

#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <exception>

class BF_Translator {

typedef void (BF_Translator::*bf_command)();

protected:
	std::fstream in;
	std::fstream out;
	std::map<char, bf_command> commands;

public:
	BF_Translator();
	virtual ~BF_Translator();

	int translate(std::string in, std::string out);

protected:
	void header();
	void footer();
	void command_inc();
	void command_desc();
	void command_next();
	void command_prev();
	void command_write();
	void command_read();
	void command_jump();
	void command_back();

};

#endif
