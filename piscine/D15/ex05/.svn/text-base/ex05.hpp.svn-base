/**
 *
 *
 *
 */

#ifndef __EX05_HPP__
#define	__EX05_HPP__

#include <iostream>
#include <exception>

template<typename T>
class array {
protected:
	unsigned int _size;
	T* tab;

public:

	array() {
		_size = 0;
		tab = NULL;
	}

	array(unsigned int size) {
		_size = size;
		tab = new T[_size];
	}

	array(const array<T> & source) {
		if (tab) {
			//delete[] tab;
		}
		_size = source._size;
		tab = new T[_size];
		unsigned int i = 0;
		while (i < _size) {
			tab[i] = source.tab[i];
			i++;
		}
	}

	virtual ~array() {
		if (tab) {
			delete[] tab;
		}
	}

	unsigned int size() const {
		return _size;
	}

	void dump() const {
		unsigned int i = 0;
		std::cout << "[";
		while (i < _size) {
			std::cout << tab[i];
			i++;
			if (i != _size) {
				std::cout << ", ";
			}
		}
		std::cout << "]" << std::endl;
	}

	template<typename U>
	array<U> convertTo(U(*convert)(const T &)) const {
		array<U> duplicate(_size);
		unsigned int i = 0;
		while (i < _size) {
			duplicate[i] = (*convert)(tab[i]);
			i++;
		}
		return duplicate;
	}

	array<T> & operator=(const array<T> & source) {
		if (tab) {
			delete[] tab;
		}
		_size = source._size;
		tab = new T[_size];
		unsigned int i = 0;
		while (i < _size) {
			tab[i] = source.tab[i];
			i++;
		}
		return *this;
	}

	T & operator[](unsigned int index) {
		if (index >= _size) {
			T * copy = new T[index + 1];
			unsigned int i = 0;
			while (i < _size) {
				copy[i] = tab[i];
				i++;
			}
			delete[] tab;
			tab = copy;
			_size = index + 1;
		}
		return tab[index];
	}

	T & operator[](unsigned int index) const {
		if (index >= _size) {
			throw std::exception();
		}
		return tab[index];
	}

};

template<>
void array<bool>::dump() const {
	unsigned int i = 0;
	std::cout << "[";
	while (i < _size) {
		std::cout << (tab[i] ? "true" : "false");
		i++;
		if (i != _size) {
			std::cout << ", ";
		}
	}
	std::cout << "]" << std::endl;
}

#endif
