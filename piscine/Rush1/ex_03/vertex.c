/**
 *
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include "new.h"
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

static VertexClass *Vertex_add(VertexClass *self, VertexClass *other) {
	return ((VertexClass *) (new(Vertex, self->x + other->x, self->y + other->y, self->z + other->z)));
}

static VertexClass *Vertex_sub(VertexClass *self, VertexClass *other) {
	return ((VertexClass *) (new(Vertex, self->x - other->x, self->y - other->y, self->z - other->z)));
}

static VertexClass _description = {
	{
		sizeof (VertexClass),
		"Vertex",
		(ctor_t) & Vertex_ctor,
		(dtor_t) NULL,
		(to_string_t) & Vertex_toString,
		(binary_operator_t) & Vertex_add,
		(binary_operator_t) & Vertex_sub
	},
	0,
	0,
	0
};

Class* Vertex = (Class*) & _description;
