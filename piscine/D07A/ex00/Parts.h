/**
 *
 *
 *
 */

#ifndef __PARTS_H__
#define __PARTS_H__

#include <string>
#include <iostream>

class Arms {
private:
	std::string _serial;
	bool _functionnal;

public:
	Arms(std::string serial = "A-01", bool functionnal = true);

	std::string serial() const;
	bool isFunctionnal() const;
	void informations() const;
};

class Legs {
private:
	std::string _serial;
	bool _functionnal;

public:
	Legs(std::string serial = "L-01", bool functionnal = true);

	std::string serial() const;
	bool isFunctionnal() const;
	void informations() const;
};

class Head {
private:
	std::string _serial;
	bool _functionnal;

public:
	Head(std::string serial = "H-01", bool functionnal = true);

	std::string serial() const;
	bool isFunctionnal() const;
	void informations() const;
};

#endif
