/**
 *
 *
 *
 */

#ifndef __OUTFILE_HH__
#define	__OUTFILE_HH__

#include <string>
#include <fstream>

#include <Operand>
#include "OutInterface.hh"

class OutFile : public OutInterface {
protected:
	std::fstream file;

public:
	OutFile(std::string filename);
	virtual ~OutFile();

	OutInterface & operator<<(std::string string);
	OutInterface & operator<<(OperandInterface * operand);

};

#endif
