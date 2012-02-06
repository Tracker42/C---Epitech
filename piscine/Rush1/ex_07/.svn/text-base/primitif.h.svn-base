/**
 *
 *
 *
 */

#ifndef __PRIMITIF_H__
#define __PRIMITIF_H__

#include "object.h"

#define PRIMITIF PrimitifClass const *__descriptor__

typedef int (*operator_get_t)(Object *this);
typedef void (*operator_set_t)(Object *this, Object *other);
typedef Object *(*operator_math_t)(Object *this, Object *other);
typedef bool (*operator_compare_t)(Object *this, Object *other);

typedef struct {
	operator_get_t __operator_get;
	operator_set_t __operator_set;
	operator_math_t __operator_add;
	operator_math_t __operator_sub;
	operator_math_t __operator_mul;
	operator_math_t __operator_div;
	operator_math_t __operator_mod;
} OperatorContainer;

typedef struct {
	operator_compare_t __operator__eq;
	operator_compare_t __operator__gt;
	operator_compare_t __operator__ge;
	operator_compare_t __operator__lt;
	operator_compare_t __operator__le;
} CompareContainer;

typedef struct {
	IMPLEMENT;
	OperatorContainer __operator__;
	CompareContainer __compare__;
} PrimitifClass;

#define get(__this) ((*((PrimitifClass *) (*(Class *) __this))->__operator__.__operator_get)(__this))
#define set(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__operator__.__operator_set)(__this, __other))
#define add(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__operator__.__operator_add)(__this, __other))
#define sub(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__operator__.__operator_sub)(__this, __other))
#define mul(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__operator__.__operator_mul)(__this, __other))
#define div(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__operator__.__operator_div)(__this, __other))
#define mod(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__operator__.__operator_mod)(__this, __other))

#define eq(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__compare__.__operator__eq)(__this, __other))
#define gt(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__compare__.__operator__gt)(__this, __other))
#define ge(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__compare__.__operator__ge)(__this, __other))
#define lt(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__compare__.__operator__lt)(__this, __other))
#define le(__this, __other) ((*((PrimitifClass *) (*(Class *) __this))->__compare__.__operator__le)(__this, __other))

#endif
