/**
 *
 *
 *
 */

#include <string.h>
#include "new.h"
#include "raise.h"

void* new(Class* class) {
	Object *object;

	if (!(object = malloc(class->__size__)))
		raise("Malloc fail");
	memcpy(object, class, class->__size__);
	if (class->__init__)
		class->__init__(object);
	return (object);
}

void delete(Object* ptr) {
	Class *base;

	base = ptr;
	if (base->__del__)
		base->__del__(ptr);
	free(ptr);
}
