/**
 *
 *
 *
 *
 */

#ifndef __STRING_H__
#define __STRING_H__

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_MIN ((size_t) 10)


#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

typedef struct s_String {
	char *str;
	size_t length;
	size_t buffer;

	void (*assign_c)(struct s_String *this, char const *s);
	void (*assign_s)(struct s_String *this, struct s_String const *str);
	void (*append_c)(struct s_String* this, char const *ap);
	void (*append_s)(struct s_String *this, struct s_String const *ap);
	char (*at)(struct s_String *this, size_t pos);
	void (*clear)(struct s_String *this);
	int (*size)(struct s_String *this);
	int (*compare_c)(struct s_String *this, char const *str);
	int (*compare_s)(struct s_String *this, const struct s_String *str);
	size_t (*copy)(struct s_String *this, char *s, size_t n, size_t pos);
	char const* (*c_str)(struct s_String * this);
	int (*empty)(struct s_String* this);
	int (*find_c)(struct s_String *this, char const *str, size_t pos);
	int (*find_s)(struct s_String *this, const struct s_String *str, size_t pos);
	void (*insert_c)(struct s_String *this, size_t pos, char const *str);
	void (*insert_s)(struct s_String *this, size_t pos, struct s_String const *str);
	int (*to_int)(struct s_String *this);
	char **(*split_c)(struct s_String *this, char separator);
	struct s_String *(*split_s)(struct s_String *this, char separator);
	void (*aff)(struct s_String *this);
	void (*join_c)(struct s_String *this, char delim, char const **tab);
	void (*join_s)(struct s_String *this, char delim, struct s_String *tab);
	struct s_String *(*substr)(struct s_String *this, int offset, int length);

} String;

void StringInit(String *this, char const *s);
void StringDestroy(String *this);



#endif
