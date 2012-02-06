
#ifndef CLASS_H
# define CLASS_H

# include <sys/types.h>
# include <stdarg.h>

# include "bool.h"

typedef void Object;
typedef void (*ctor_t)(Object * self, va_list * args);
typedef void (*dtor_t)(Object * self);
typedef char const* (*to_string_t)(Object* self);
typedef Object* (*binary_operator_t)(const Object* self, const Object* other);
typedef bool (*binary_comparator_t)(const Object* self, const Object* other);

typedef struct {
    const size_t        __size__;
    const char*         __name__;
    ctor_t              __init__;
    dtor_t              __del__;
    to_string_t         __str__;
    binary_operator_t   __add__;
    binary_operator_t   __sub__;
    binary_operator_t   __mul__;
    binary_operator_t   __div__;
    binary_comparator_t __eq__;
    binary_comparator_t __gt__;
    binary_comparator_t __lt__;
} Class;

# define str(o) (((Class*) o)->__str__ != NULL ? ((Class*) o)->__str__(o) : "")
# define add(a, b) (((Class*) a)->__add__(a, b))
# define sub(a, b) (((Class*) a)->__sub__(a, b))
# define mul(a, b) (((Class*) a)->__mul__(a, b))
# define div(a, b) (((Class*) a)->__div__(a, b))
# define eq(a, b) (((Class*) a)->__eq__(a, b))
# define gt(a, b) (((Class*) a)->__gt__(a, b))
# define lt(a, b) (((Class*) a)->__lt__(a, b))

#endif
