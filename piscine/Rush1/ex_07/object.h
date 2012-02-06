/**
 *
 *
 *
 */

#ifndef __OBJECT_H__
#define __OBJECT_H__

#include <stdlib.h>
#include <stdarg.h>

#define OBJECT Class const __descriptor__
#define IMPLEMENT ClassDescriptor const __descriptor__

#define instanceof(__object, __class) ((*(Class *) (__object))->__magic__ == (*(Class *) (__class))->__magic__)
#define get_class(__object) ((*(Class *) (__object))->__name__)

typedef void Object;

typedef void (*constructor)(Object *self, va_list *args);
typedef void (*destructor)(Object *self);

typedef struct ClassDescriptor_s {
	const unsigned int __magic__;
	const size_t __size__;
	const char * __name__;
	constructor __constructor__;
	destructor __destructor__;
} ClassDescriptor;

typedef ClassDescriptor * Class;

#endif
