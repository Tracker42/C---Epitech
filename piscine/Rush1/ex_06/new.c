#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#include "new.h"
#include "raise.h"

Object *new(Class* class, ...) {
	Object *object;
	va_list ap;

	va_start(ap, class);
	object = va_new(class, &ap);
	va_end(ap);
	return object;
}

Object *va_new(Class *class, va_list *ap) {
	Object *object;
	Class base = *class;

	if (!(object = malloc(base.__size__)))
		raise("Malloc fail");
	memcpy(object, class, base.__size__);
	if (base.__init__)
		base.__init__(object, ap);
	return (object);
}

void delete(Object* ptr) {
	Class *base;

	if (ptr) {
		base = ptr;
		if (base->__del__)
			base->__del__(ptr);
		free(ptr);
	}
}
