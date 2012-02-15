/**
 *
 *
 *
 */

#ifndef __ABSTRACTINSTRUCTION_HH__
#define	__ABSTRACTINSTRUCTION_HH__

class AbstractInstruction : public InstructionInterface {
protected:

public:
	AbstractInstruction();
	virtual ~AbstractInstruction() = 0;

	virtual void initialize();
	virtual void finalize();

	virtual void addParam(std::string param);

};

#endif
