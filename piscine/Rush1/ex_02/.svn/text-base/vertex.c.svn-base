/**
 *
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include "vertex.h"

#define VERTEX_TO_STRING_MASK "<%s (%i, %i, %i)>"
#define VERTEX_TO_STRING_SIZE 100

typedef struct {
	Class base;
	int x;
	int y;
	int z;
} VertexClass;

static void Vertex_ctor(VertexClass* self, va_list *ap) {
	self->x = va_arg(*ap, int);
	self->y = va_arg(*ap, int);
	self->z = va_arg(*ap, int);
}

static char* Vertex_toString(VertexClass *self) {
	char *str;

	if (!(str = malloc(VERTEX_TO_STRING_SIZE))) {
		return NULL;
	}
	memset(str, 0, VERTEX_TO_STRING_SIZE);

	snprintf(str, VERTEX_TO_STRING_SIZE, VERTEX_TO_STRING_MASK, self->base.__name__, self->x, self->y, self->z);
	return str;
}

static VertexClass _description = {
	{ sizeof (VertexClass), "Vertex", (ctor_t) & Vertex_ctor, NULL, (to_string_t) & Vertex_toString},
	0,
	0,
	0
};

Class* Vertex = (Class*) & _description;
