/**
 *
 *
 *
 */

#ifndef __INT_STATIC_H__
#define __INT_STATIC_H__

#include "Int.h"

static void __constructor(IntClass *this, va_list *ap);
static int __operator_get(IntClass *this);
static void __operator_set(IntClass *this, IntClass *other);
static IntClass *__operator_add(IntClass *this, IntClass *other);
static IntClass *__operator_sub(IntClass *this, IntClass *other);
static IntClass *__operator_mul(IntClass *this, IntClass *other);
static IntClass *__operator_div(IntClass *this, IntClass *other);
static IntClass *__operator_mod(IntClass *this, IntClass *other);
static bool __operator_eq(IntClass *this, IntClass *other);
static bool __operator_gt(IntClass *this, IntClass *other);
static bool __operator_ge(IntClass *this, IntClass *other);
static bool __operator_lt(IntClass *this, IntClass *other);
static bool __operator_le(IntClass *this, IntClass *other);

static PrimitifClass __primitif__ = {
	{
		0x496E74,
		sizeof (IntClass),
		"Int",
		(constructor) & __constructor,
		(destructor) NULL,
	},
	{
		(operator_get_t) & __operator_get,
		(operator_set_t) & __operator_set,
		(operator_math_t) & __operator_add,
		(operator_math_t) & __operator_sub,
		(operator_math_t) & __operator_mul,
		(operator_math_t) & __operator_div,
		(operator_math_t) & __operator_mod
	},
	{
		(operator_compare_t) & __operator_eq,
		(operator_compare_t) & __operator_gt,
		(operator_compare_t) & __operator_ge,
		(operator_compare_t) & __operator_lt,
		(operator_compare_t) & __operator_le,
	},
};

static IntClass __int__ = {
	//Class
	&__primitif__,

	//args
	0,

	//Method

};

Class *Int = (Class *) & __int__;

#endif
