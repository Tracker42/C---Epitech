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
#include "int.h"
#include "bool.h"

#define INT_TO_STRING_MASK "%i"
#define INT_TO_STRING_SIZE 15

typedef struct {
	Class base;
	int i;
} IntClass;

static void Int_ctor(IntClass* self, va_list *ap) {
	self->i = va_arg(*ap, int);
}

static char* Int_toString(IntClass *self) {
	char *str;
	if (!(str = malloc(INT_TO_STRING_SIZE))) {
		return NULL;
	}
	memset(str, 0, INT_TO_STRING_SIZE);
	snprintf(str, INT_TO_STRING_SIZE, INT_TO_STRING_MASK, self->i);
	return str;
}

static IntClass* Int_add(const IntClass* self, const IntClass* other) {
	return (IntClass *) new(Int, self->i + other->i);
}

static IntClass* Int_sub(const IntClass* self, const IntClass* other) {
	return (IntClass *) new(Int, self->i - other->i);
}

static IntClass* Int_mul(const IntClass* self, const IntClass* other) {
	return (IntClass *) new(Int, self->i * other->i);
}

static IntClass* Int_div(const IntClass* self, const IntClass* other) {
	if (other->i == 0)
		return ((IntClass *) new(Int, 0));
	return ((IntClass *) new(Int, self->i / other->i));
}

static bool Int_eq(const IntClass* self, const IntClass* other) {
	return (self->i == other->i);
}

static bool Int_gt(const IntClass* self, const IntClass* other) {
	return (self->i > other->i);
}

static bool Int_lt(const IntClass* self, const IntClass* other) {
	return (self->i < other->i);
}

static IntClass _description = {
	{
		sizeof (IntClass),
		"Int",
		(ctor_t) & Int_ctor,
		(dtor_t) NULL,
		(to_string_t) & Int_toString,
		(binary_operator_t) & Int_add,
		(binary_operator_t) & Int_sub,
		(binary_operator_t) & Int_mul,
		(binary_operator_t) & Int_div,
		(binary_comparator_t) & Int_eq,
		(binary_comparator_t) & Int_gt,
		(binary_comparator_t) & Int_lt
	},
	0
};

Class* Int = (Class*) & _description;
