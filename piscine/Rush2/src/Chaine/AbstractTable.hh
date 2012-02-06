/**
 *
 *
 *
 */

#ifndef __ABSTRACTTABLE_H__
#define __ABSTRACTTABLE_H__

#include <string>

#include <objet>
#include <logger>

#include "ITable.hh"
#include "Messages.hh"

class AbstractTable : public ITable {
protected:
	int size;
	int count;
	Objet **table;

	AbstractTable();
	void createTable(int size);
	void reorganize();
	void clear();

public:
	virtual ~AbstractTable();

	int getSize() const;
	int getCount() const;

	virtual Objet * take();
	virtual Objet * take(int index);
	virtual bool put(Objet *object);
	virtual e_type * regarder() const;

};

#endif
