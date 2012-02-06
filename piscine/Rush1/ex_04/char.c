#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#include "new.h"
#include "raise.h"
#include "char.h"

typedef struct {
	Class base;
	char c;
} CharClass;

static void Char_ctor(CharClass *self, va_list *args) {
	self->c = va_arg(*args, int);
}

static char *Char_toString(CharClass *self) {
	char *str;
	if (!(str = malloc(sizeof (char) * 2)))
		return NULL;
	str[0] = self->c;
	str[1] = '\0';
	return str;
}

static CharClass *Char_add(const CharClass *self, const CharClass *other) {
	return (CharClass *) new(Char, self->c + other->c);
}

static CharClass *Char_sub(const CharClass *self, const CharClass *other) {
	return (CharClass *) new(Char, self->c - other->c);
}

static CharClass *Char_mul(const CharClass *self, const CharClass *other) {
	return (CharClass *) new(Char, self->c * other->c);
}

static CharClass *Char_div(const CharClass *self, const CharClass *other) {
	if (other->c == 0)
		return ((CharClass *) new(Char, 0));
	return ((CharClass *) new(Char, self->c / other->c));
}

static bool Char_eq(const CharClass *self, const CharClass *other) {
	if (self->c == other->c)
		return 1;
	return 0;
}

static bool Char_gt(const CharClass *self, const CharClass *other) {
	if (self->c > other->c)
		return 1;
	return 0;
}

static bool Char_lt(const CharClass *self, const CharClass *other) {
	if (self->c < other->c)
		return 1;
	return 0;
}

static CharClass _description = {
	{
		sizeof (CharClass),
		"Char",
		(ctor_t) & Char_ctor,
		NULL,
		(to_string_t) & Char_toString,
		(binary_operator_t) & Char_add,
		(binary_operator_t) & Char_sub,
		(binary_operator_t) & Char_mul,
		(binary_operator_t) & Char_div,
		(binary_comparator_t) & Char_eq,
		(binary_comparator_t) & Char_gt,
		(binary_comparator_t) & Char_lt
	},
	0
};

Class *Char = (Class *) & _description;
