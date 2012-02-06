#include <stdlib.h>
#include <stdarg.h>

#include "raise.h"
#include "array.h"
#include "new.h"

typedef struct {
	Container base;
	Class* _type;
	size_t _size;
	Object** _tab;
} ArrayClass;

typedef struct {
	Iterator base;
	ArrayClass* _array;
	size_t _idx;
} ArrayIteratorClass;

void ArrayIterator_ctor(ArrayIteratorClass* self, va_list* args) {
	self->_array = va_arg(*args, ArrayClass *);
	self->_idx = va_arg(*args, size_t);
}

bool ArrayIterator_eq(ArrayIteratorClass* self, ArrayIteratorClass* other) {
	return ((self->_array == other->_array) && (self->_idx == other->_idx));
}

bool ArrayIterator_gt(ArrayIteratorClass* self, ArrayIteratorClass* other) {
	return (self->_array == other->_array) && (self->_idx > other->_idx);
}

bool ArrayIterator_lt(ArrayIteratorClass* self, ArrayIteratorClass* other) {
	return (self->_array == other->_array) && (self->_idx < other->_idx);
}

void ArrayIterator_incr(ArrayIteratorClass* self) {
	self->_idx++;
}

Object *ArrayIterator_getval(ArrayIteratorClass* self) {
	return (*((Container *) self->_array)->__getitem__)((Container *) self->_array, self->_idx);
}

void ArrayIterator_setval(ArrayIteratorClass* self, ...) {
	va_list ap;
	if (self->_idx > self->_array->_size)
		return;
	va_start(ap, self);
	delete(self->_array->_tab[self->_idx]);
	self->_array->_tab[self->_idx] = va_new(self->_array->_type, &ap);
	va_end(ap);
}

static ArrayIteratorClass ArrayIteratorDescr = {
	{
		{
			sizeof (ArrayIteratorClass), "ArrayIterator",
			(ctor_t) & ArrayIterator_ctor,
			NULL, /* dtor */
			NULL, /* str */
			NULL, NULL, NULL, NULL, /* add, sub, mul, div */
			(binary_comparator_t) & ArrayIterator_eq,
			(binary_comparator_t) & ArrayIterator_gt,
			(binary_comparator_t) & ArrayIterator_lt,
		},
		(incr_t) &ArrayIterator_incr,
		(getval_t) & ArrayIterator_getval,
		(setval_t) & ArrayIterator_setval,
	},
	NULL,
	0
};

static Class* ArrayIterator = (Class*) & ArrayIteratorDescr;

void Array_ctor(ArrayClass* self, va_list* args) {
	size_t i;
	va_list cpy;

	self->_size = va_arg(*args, size_t);
	self->_type = va_arg(*args, Class *);
	self->_tab = malloc(sizeof (Object *) * self->_size);
	for (i = 0; i < self->_size; i++) {
		va_copy(cpy, *args);
		self->_tab[i] = va_new(self->_type, &cpy);
	}
}

void Array_dtor(ArrayClass* self) {
	unsigned int i;

	for (i = 0; i < self->_size; i++)
		free(self->_tab[i]);
	free(self->_tab);
}

size_t Array_len(ArrayClass* self) {
	return (self->_size);
}

Iterator* Array_begin(ArrayClass* self) {
	return new(ArrayIterator, self, 0);
}

Iterator* Array_end(ArrayClass* self) {
	return new(ArrayIterator, self, self->_size - 1);
}

Object* Array_getitem(ArrayClass* self, ...) {
	va_list ap;
	size_t size;

	va_start(ap, self);
	size = va_arg(ap, size_t);
	va_end(ap);
	if (size > self->_size)
		return NULL;
	return (self->_tab[size]);
}

void Array_setitem(ArrayClass* self, ...) {
	va_list ap;
	size_t size;

	va_start(ap, self);
	size = va_arg(ap, size_t);
	if (size > self->_size)
		return;
	delete(self->_tab[size]);
	self->_tab[size] = va_new(self->_type, &ap);
	va_end(ap);
}

static ArrayClass _descr = {
	{ /* Container */
		{ /* Class */
			sizeof (ArrayClass), "Array",
			(ctor_t) & Array_ctor, (dtor_t) & Array_dtor,
			NULL, /*str */
			NULL, NULL, NULL, NULL, /* add, sub, mul, div */
			NULL, NULL, NULL, /* eq, gt, lt */
		},
		(len_t) &Array_len,
		(iter_t) & Array_begin,
		(iter_t) & Array_end,
		(getitem_t) & Array_getitem,
		(setitem_t) & Array_setitem,
	},
	NULL, 0, NULL
};

Class* Array = (Class*) & _descr;
