
#include <stdio.h>
#include <assert.h>

#include "list.h"
#include "int.h"
#include "float.h"
#include "char.h"
#include "new.h"

typedef struct ListClass_s {
	Container base;
	Class* _type;
	size_t _size;
	t_list *_list;
} ListClass;

void float_print(const void *);

int main() {
	Object* list = new(List, 10, Float, 0);
	Object* it = begin(list);
	Object* it_end = end(list);

	printf("list size: %zu\n", len(list));
	setitem(list, 0, (double) 16.);
	setitem(list, 1, (double) 15.);
	setitem(list, 6, (double) 15.);
	(*((Iterator *) it)->__setval__)(it, (double) 6.);
	while (lt(it, it_end)) {
		printf("%s ", str(getval(it)));
		incr(it);
	}
	printf("\n");
	delete(it);
	delete(it_end);
	delete(list);
	return 0;
}
