/**
 *
 *
 *
 */
#ifndef __INT_H__
#define __INT_H__

#include <stdbool.h>

#include "object.h"
#include "new.h"
#include "primitif.h"

extern Class *Int;

#define is_Int(__object) (instanceof(__object, Int))

typedef struct IntClass_s {
	PRIMITIF;
	int value;
} IntClass;

#endif
