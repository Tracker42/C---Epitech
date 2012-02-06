/**
 *
 *
 *
 */

#include "Int.h"
#include "IntStatic.h"

static void __constructor(IntClass *this, va_list *ap) {
	this->value = va_arg(*ap, int);
}

static int __operator_get(IntClass *this) {
	if (!is_Int(this)) {
		return 0;
	}
	return this->value;
}

static void __operator_set(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return;
	}
	this->value = other->value;
}

static IntClass *__operator_add(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return NULL;
	}
	return (IntClass *) new(Int, this->value + other->value);
}

static IntClass *__operator_sub(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return NULL;
	}
	return new(Int, this->value - other->value);
}

static IntClass *__operator_mul(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return NULL;
	}
	return new(Int, this->value * other->value);
}

static IntClass *__operator_div(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return NULL;
	}
	if (other->value) {
		return new(Int, this->value / other->value);
	}
	return new(Int, 0);
}

static IntClass *__operator_mod(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return NULL;
	}
	return new(Int, this->value % other->value);
}

static bool __operator_eq(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return false;
	}
	return this->value == other->value;
}

static bool __operator_gt(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return false;
	}
	return this->value > other->value;
}

static bool __operator_ge(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return false;
	}
	return this->value >= other->value;
}

static bool __operator_lt(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return false;
	}
	return this->value < other->value;
}

static bool __operator_le(IntClass *this, IntClass *other) {
	if (!is_Int(this) || !is_Int(other)) {
		return false;
	}
	return this->value <= other->value;
}
