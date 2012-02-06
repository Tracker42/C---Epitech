/**
 *
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include "point.h"

#define POINT_TO_STRING_MASK "<%s (%i, %i)>"
#define POINT_TO_STRING_SIZE 100

typedef struct {
	Class base;
	int x;
	int y;
} PointClass;

static void Point_ctor(PointClass* self, va_list *ap) {
	self->x = va_arg(*ap, int);
	self->y = va_arg(*ap, int);
}

static char* Point_toString(PointClass *self) {
	char *str;
	if (!(str = malloc(POINT_TO_STRING_SIZE))) {
		return NULL;
	}
	memset(str, 0, POINT_TO_STRING_SIZE);
	snprintf(str, POINT_TO_STRING_SIZE, POINT_TO_STRING_MASK, self->base.__name__, self->x, self->y);
	return str;
}

static PointClass _description = {
	{ sizeof (PointClass), "Point", (ctor_t) & Point_ctor, NULL, (to_string_t) & Point_toString},
	0,
	0
};

Class* Point = (Class*) & _description;
