/**
 *
 *
 *
 */

#ifndef __ITABLE_H__
#define __ITABLE_H__

#include "ObjectManagerInterface.hh"

class ITable : public ObjectManagerInterface {
protected:

public:
	~ITable() {}

	virtual Objet * take() = 0;
	virtual Objet * take(int index) = 0;
	virtual bool put(Objet *object) = 0;
	virtual e_type * regarder() const = 0;
};

#endif
