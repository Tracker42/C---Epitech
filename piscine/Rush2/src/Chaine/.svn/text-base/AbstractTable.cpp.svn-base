/**
 *
 *
 *
 */

#include "AbstractTable.hh"

AbstractTable::AbstractTable()
: count(0) {
}

AbstractTable::~AbstractTable() {
	clear();
	delete[] table;
}

void AbstractTable::createTable(int size) {
	this->size = size;
	table = new Objet*[size];
	int i;
	for (i = 0; i < size; i++) {
		table[i] = NULL;
	}
	count = 0;
}

int AbstractTable::getSize() const {
	return size;
}

int AbstractTable::getCount() const {
	return count;
}

Objet * AbstractTable::take() {
	return take(0);
}

Objet *AbstractTable::take(int index) {
	if (index >= 0 && index < size) {
		Objet *value = table[index];
		table[index] = NULL;
		count--;
		reorganize();
		return value;
	}
	return NULL;
}

bool AbstractTable::put(Objet* object) {
	if (object) {
		if (count < size) {
			table[count++] = object;
		}
		else {
			clear();
			Logger::error(MSG_ERROR_TABLE_OVERFLOW);
			return false;
		}
	}
	return true;
}

e_type * AbstractTable::regarder() const {
	int count = getCount();
	e_type * content = new e_type[count + 1];
	int i;
	for (i = 0; i < count; i++) {
		content[i] = table[i]->getType();
	}
	content[count] = INCONNU;
	return content;
}

void AbstractTable::reorganize() {
	int i;
	int j = 0;
	for (i = 0; i < size; i++) {
		if (table[i]) {
			table[j] = table[i];
			j++;
		}
	}
	for (; j < size; j++) {
		table[j] = NULL;
	}
}

void AbstractTable::clear() {
	int i;
	for (i = 0; i < count; i++) {
		if (table[i]) {
			delete table[i];
		}
		table[i] = NULL;
	}
}
