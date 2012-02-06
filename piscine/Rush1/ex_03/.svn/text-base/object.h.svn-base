
#ifndef CLASS_H
# define CLASS_H

# include <sys/types.h>
# include <stdarg.h>

typedef void Object;
typedef void (*ctor_t)(Object * self, va_list * args);
typedef void (*dtor_t)(Object * self);
typedef char const* (*to_string_t)(Object* self);
typedef Object* (*binary_operator_t)(const Object* self, const Object* other);

typedef struct {
    const size_t        __size__;
    const char*         __name__;
    ctor_t              __init__;
    dtor_t              __del__;
    to_string_t         __str__;
    binary_operator_t   __add__;
    binary_operator_t   __sub__;
} Class;

# define str(o) (((Class*) o)->__str__ != NULL ? ((Class*) o)->__str__(o) : "")
# define add(a, b) (((Class*) a)->__add__(a, b))
# define sub(a, b) (((Class*) a)->__sub__(a, b))

#endif
