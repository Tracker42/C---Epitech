/**
 *
 *
 *
 */

#include "Squad.hh"

Squad::Squad()
: count(0), size(10) {
	array = new ISpaceMarine*[size];
	int i = 0;
	while (i < size) {
		array[i++] = NULL;
	}
}

Squad::Squad(Squad const & squad) {
	count = squad.count;
	size = squad.size;
	array = new ISpaceMarine*[size];
	int i = 0;
	while (i < size) {
		array[i] = NULL;
		if (squad.array[i]) {
			array[i] = squad.array[i]->clone();
		}
		i++;
	}
}

Squad::~Squad() {
	int i = 0;
	while (i < (int) count) {
		delete array[i];
	}
	delete[] array;
}

int Squad::getCount() const {
	return count;
}

ISpaceMarine *Squad::getUnit(int position) {
	if (position > size || position < 0) {
		return NULL;
	}
	return array[position];
}

int Squad::push(ISpaceMarine *marine) {
	if (marine) {
		if (count >= size) {
			resize();
		}
		int i = 0;
		while (i < (count)) {
			if (array[i++] == marine) {
				return count;
			}
		}
		array[count++] = marine;
	}
	return count;
}

Squad & Squad::operator =(Squad const & squad) {
	int i = 0;
	while (i < count) {
		delete array[i];
	}
	delete[] array;
	count = squad.count;
	size = squad.size;
	array = new ISpaceMarine*[size];
	i = 0;
	while (i < size) {
		array[i] = NULL;
		if (squad.array[i]) {
			array[i] = squad.array[i]->clone();
		}
		i++;
	}
	return *this;
}

void Squad::resize() {
	size_t new_size = size * 1.5;
	ISpaceMarine **new_array = new ISpaceMarine *[new_size];
	int i = 0;
	while (i < (int) size) {
		new_array[i] = array[i];
		i++;
	}
	while (i < (int) new_size) {
		new_array[i++] = NULL;
	}
	delete[] array;
	array = new_array;
	size = new_size;
}
