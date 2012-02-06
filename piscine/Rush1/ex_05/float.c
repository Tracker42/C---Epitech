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
#include "float.h"
#include "bool.h"

#define FLOAT_TO_STRING_MASK "%f"
#define FLOAT_TO_STRING_SIZE 15

typedef struct {
	Class base;
	float i;
} FloatClass;

static void Float_ctor(FloatClass* self, va_list *ap) {
	self->i = va_arg(*ap, double);
}

static char* Float_toString(FloatClass *self) {
	char *str;
	if (!(str = malloc(FLOAT_TO_STRING_SIZE))) {
		return NULL;
	}
	memset(str, 0, FLOAT_TO_STRING_SIZE);
	snprintf(str, FLOAT_TO_STRING_SIZE, FLOAT_TO_STRING_MASK, self->i);
	return str;
}

static FloatClass* Float_add(const FloatClass* self, const FloatClass* other) {
	return (FloatClass *) new(Float, self->i + other->i);
}

static FloatClass* Float_sub(const FloatClass* self, const FloatClass* other) {
	return (FloatClass *) new(Float, self->i - other->i);
}

static FloatClass* Float_mul(const FloatClass* self, const FloatClass* other) {
	return (FloatClass *) new(Float, self->i * other->i);
}

static FloatClass* Float_div(const FloatClass* self, const FloatClass* other) {
	return (FloatClass *) new(Float, self->i / other->i);
}

static bool Float_eq(const FloatClass* self, const FloatClass* other) {
	return (self->i == other->i);
}

static bool Float_gt(const FloatClass* self, const FloatClass* other) {
	return (self->i > other->i);
}

static bool Float_lt(const FloatClass* self, const FloatClass* other) {
	return (self->i < other->i);
}

static FloatClass _description = {
	{
		sizeof (FloatClass),
		"Float",
		(ctor_t) & Float_ctor,
		(dtor_t) NULL,
		(to_string_t) & Float_toString,
		(binary_operator_t) & Float_add,
		(binary_operator_t) & Float_sub,
		(binary_operator_t) & Float_mul,
		(binary_operator_t) & Float_div,
		(binary_comparator_t) & Float_eq,
		(binary_comparator_t) & Float_gt,
		(binary_comparator_t) & Float_lt
	},
	0
};

Class* Float = (Class*) & _description;
