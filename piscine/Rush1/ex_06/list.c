#include <stdlib.h>
#include <stdarg.h>

#include "raise.h"
#include "list.h"
#include "new.h"

typedef struct ListClass_s {
	Container base;
	Class* _type;
	size_t _size;
	t_list *_list;
} ListClass;

typedef struct {
	Iterator base;
	ListClass *_list;
	size_t _idx;
} ListIteratorClass;

void ListIterator_ctor(ListIteratorClass* self, va_list* args) {
	self->_list = va_arg(*args, ListClass *);
	self->_idx = va_arg(*args, int);
}

bool ListIterator_eq(ListIteratorClass* self, ListIteratorClass* other) {
	return ((self->_list == other->_list) && (self->_idx == other->_idx));
}

bool ListIterator_gt(ListIteratorClass* self, ListIteratorClass* other) {
	return (self->_list == other->_list) && (self->_idx > other->_idx);
}

bool ListIterator_lt(ListIteratorClass* self, ListIteratorClass* other) {
	return (self->_list == other->_list) && (self->_idx < other->_idx);
}

void ListIterator_incr(ListIteratorClass* self) {
	self->_idx++;
}

Object *ListIterator_getval(ListIteratorClass* self) {
	return (*((Container *) self->_list)->__getitem__)((Container *) self->_list, self->_idx);
}

void ListIterator_setval(ListIteratorClass* self, ...) {
	va_list ap;
	va_start(ap, self);
	int size = self->_idx;
	if (size >= 0 && size < (int) self->_list->_size) {
		t_list *list = self->_list->_list;
		while (size--) {
			list = list->next;
		}
		delete((Object *) list->content);
		list->content = va_new(self->_list->_type, &ap);
	}
	va_end(ap);
}

static ListIteratorClass ListIteratorDescr = {
	{
		{
			sizeof (ListIteratorClass), "ListIterator",
			(ctor_t) & ListIterator_ctor,
			NULL, /* dtor */
			NULL, /* str */
			NULL, NULL, NULL, NULL, /* add, sub, mul, div */
			(binary_comparator_t) & ListIterator_eq,
			(binary_comparator_t) & ListIterator_gt,
			(binary_comparator_t) & ListIterator_lt,
		},
		(incr_t) &ListIterator_incr,
		(getval_t) & ListIterator_getval,
		(setval_t) & ListIterator_setval,
	},
	NULL,
	0
};

static Class* ListIterator = (Class*) & ListIteratorDescr;

void List_ctor(ListClass* self, va_list* args) {
	size_t size;
	va_list cpy;

	self->_size = va_arg(*args, int);
	self->_type = va_arg(*args, Class *);
	size = self->_size;
	while (size--) {
		va_copy(cpy, *args);
		list_add_begin(&self->_list, va_new(self->_type, &cpy));
		va_end(cpy);
	}
}

void List_dtor(ListClass* self) {
	t_list *list = self->_list;
	t_list *del;
	while (list) {
		del = list;
		list = list->next;
		delete((Object *) del->content);
		free(del);
	}
}

size_t List_len(ListClass* self) {
	return (self->_size);
}

Iterator* List_begin(ListClass* self) {
	return new(ListIterator, self, 0);
}

Iterator* List_end(ListClass* self) {
	return new(ListIterator, self, self->_size - 1);
}

Object* List_getitem(ListClass* self, ...) {
	va_list ap;
	va_start(ap, self);
	int size = va_arg(ap, int);
	va_end(ap);
	if (size >= 0 && size < (int) self->_size) {
		t_list *list = self->_list;
		while (size--) {
			list = list->next;
		}
		return (Object *) list->content;
	}
	return NULL;
}

void List_setitem(ListClass* self, ...) {
	va_list ap;
	va_start(ap, self);
	int size = va_arg(ap, int);
	if (size >= 0 && size < (int) self->_size) {
		t_list *list = self->_list;
		while (size--) {
			list = list->next;
		}
		delete((Object *) list->content);
		list->content = va_new(self->_type, &ap);
	}
	va_end(ap);
}

static ListClass _descr = {
	{ /* Container */
		{ /* Class */
			sizeof (ListClass), "List",
			(ctor_t) & List_ctor, (dtor_t) & List_dtor,
			NULL, /*str */
			NULL, NULL, NULL, NULL, /* add, sub, mul, div */
			NULL, NULL, NULL, /* eq, gt, lt */
		},
		(len_t) &List_len,
		(iter_t) & List_begin,
		(iter_t) & List_end,
		(getitem_t) & List_getitem,
		(setitem_t) & List_setitem,
	},
	NULL, 0, NULL
};

Class* List = (Class*) & _descr;
