/**
 *
 *
 *
 */

#ifndef __PICTURE_H__
#define __PICTURE_H__

#include <string>
#include <iostream>
#include <fstream>

class Picture {
protected:

public:
	std::string data;

	Picture();
	Picture(const std::string & filename);
	virtual ~Picture();

	bool getPictureFromFile(const std::string & filename);

	Picture & operator=(Picture const & picture);

};

#endif
