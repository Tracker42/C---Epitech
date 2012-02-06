/**
 *
 *
 *
 */

#ifndef __EX02_H__
#define __EX02_H__

#include <iostream>

int min(int a, int b) {
	std::cout << "non-template min" << std::endl;
	if (a <= b) {
		return a;
	}
	return b;
}

template<typename T>
const T & min(const T & a, const T & b) {
	std::cout << "template min" << std::endl;
	if (a <= b) {
		return a;
	}
	return b;
}

int nonTemplateMin(int * tab, int size) {
	int m = tab[0];
	int i = 1;
	while (i < size) {
		m = min(m, tab[i]);
		i++;
	}
	return m;
}

template<typename T>
const T & templateMin(const T * tab, int size) {
	T & m = const_cast<T&>(tab[0]);
	int i = 1;
	while (i < size) {
		m = min<T>(m, tab[i]);
		i++;
	}
	return m;
}

#endif
