/**
 *
 *
 *
 */

#ifndef __SQUAD_H__
#define __SQUAD_H__

#include <string>
#include <iostream>

#include "ISquad.hh"
#include "ISpaceMarine.hh"

class Squad : public ISquad {
protected:
	int count;
	int size;
	ISpaceMarine **array;

public:
	Squad();
	Squad(Squad const & squad);
	virtual ~Squad();

	int getCount() const;
	ISpaceMarine *getUnit(int position);
	int push(ISpaceMarine *marine);

	Squad & operator=(Squad const & squad);

protected:
	void resize();

};

#endif
