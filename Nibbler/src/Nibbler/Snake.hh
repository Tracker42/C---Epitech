/**
 *
 *
 *
 */

#ifndef __SNAKE_HH__
#define	__SNAKE_HH__

#include <vector>
#include <exception>

#include "Model.hh"
#include "Element.hh"

#define container std::vector

class Snake {
protected:
	container<Element *> node;
	Element * eaten;

	void init(const Point & first, size_t size);
	void destroy();

public:
	Snake();
	Snake(const Point & first, size_t size = 4);
	virtual ~Snake();

	int getSize() const;

	bool move(NDirection direction);
	const Element & head() const;
	const Element & tail() const;
	void eat();

	void reset(Point first, size_t size = 4);

	const Element & operator [](size_t pos) const;

};

#endif
