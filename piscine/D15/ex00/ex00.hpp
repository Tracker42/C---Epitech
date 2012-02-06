/**
 *
 *
 *
 */

#ifndef __EX00_H__
#define __EX00_H__

template<typename T>
void swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

template<typename T>
const T & min(const T & a, const T & b) {
	if (a < b) {
		return a;
	}
	return b;
}

template<typename T>
const T & max(const T & a, const T & b) {
	if (a > b) {
		return a;
	}
	return b;
}

template<typename T>
T add(const T & a, const T & b) {
	return a + b;
}

#endif
