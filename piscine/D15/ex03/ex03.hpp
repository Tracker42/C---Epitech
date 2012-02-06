/**
 *
 *
 *
 */

#ifndef __EX03_H__
#define __EX03_H__

#include <iostream>

template<typename T>
void foreach(const T * tab, void (func)(const T &), int size) {
	int i = 0;
	while (i < size) {
		(*func)(tab[i]);
		i++;
	}
}

template<typename T>
void print(const T & a) {
	std::cout << a << std::endl;
}

#endif
