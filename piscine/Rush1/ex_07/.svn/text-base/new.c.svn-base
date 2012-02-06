/**
 *
 *
 *
 */

#include "new.h"

Object *new(Class *class, ...) {
	va_list ap;
	va_start(ap, class);
	Object *object = va_new(class, &ap);
	va_end(ap);
	return object;
}

Object *va_new(Class *class, va_list *ap) {
	ClassDescriptor *descriptor = ((ClassDescriptor *) *class);
	Object *object;
	object = malloc(descriptor->__size__);
	memcpy(object, class, descriptor->__size__);
	if (descriptor->__constructor__) {
		(descriptor->__constructor__)(object, ap);
	}
	return object;
}

void delete(Object *object) {
	ClassDescriptor *descriptor = ((ClassDescriptor *) *((Class *) object));
	if (descriptor->__destructor__) {
		(*descriptor->__destructor__)(object);
	}
	free(object);
}
