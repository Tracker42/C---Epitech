/**
 *
 *
 *
 *
 */

#include "String.h"

static void assign_c(struct s_String *this, char const *s);
static void assign_s(struct s_String *this, struct s_String const *str);
static void append_c(struct s_String* this, char const *ap);
static void append_s(struct s_String *this, struct s_String const *ap);
static char at(struct s_String *this, size_t pos);
static void clear(struct s_String *this);
static int size(struct s_String *this);
static int compare_c(struct s_String *this, char const *str);
static int compare_s(struct s_String *this, const struct s_String *str);
static size_t copy(struct s_String *this, char *s, size_t n, size_t pos);
static char const* c_str(struct s_String * this);
static int empty(struct s_String* this);
static int find_c(struct s_String *this, char const *str, size_t pos);
static int find_s(struct s_String *this, const struct s_String *str, size_t pos);
static void insert_c(struct s_String *this, size_t pos, char const *str);
static void insert_s(struct s_String *this, size_t pos, struct s_String const *str);
static int to_int(struct s_String *this);
static char **split_c(struct s_String *this, char separator);
static struct s_String *split_s(struct s_String *this, char separator);
static void aff(struct s_String *this);
static void join_c(struct s_String *this, char delim, char const **tab);
static void join_s(struct s_String *this, char delim, struct s_String *tab);
static struct s_String *substr(struct s_String *this, int offset, int length);

void StringInit(String *this, char const *s) {
	if (s) {
		this->length = strlen(s);
		this->buffer = MAX(this->length, BUFFER_MIN);
		this->str = malloc(this->buffer);
		strcpy(this->str, s);
	}
	else {
		this->str = NULL;
		this->length = 0;
		this->buffer = 0;
	}
	this->assign_c = &assign_c;
	this->assign_s = &assign_s;
	this->append_c = &append_c;
	this->append_s = &append_s;
	this->at = &at;
	this->clear = &clear;
	this->size = &size;
	this->compare_c = &compare_c;
	this->compare_s = &compare_s;
	this->copy = &copy;
	this->c_str = &c_str;
	this->empty = &empty;
	this->find_c = &find_c;
	this->find_s = &find_s;
	this->insert_c = &insert_c;
	this->insert_s = &insert_s;
	this->to_int = &to_int;
	this->split_c = &split_c;
	this->split_s = &split_s;
	this->aff = &aff;
	this->join_c = &join_c;
	this->join_s = &join_s;
	this->substr = &substr;
}

void StringDestroy(String *this) {
	if (this->str) {
		free(this->str);
	}
	memset(this, 0, sizeof(String));
}

static void string_realloc(String *this, size_t size) {
	if (size > this->buffer) {
		size = MAX(size, BUFFER_MIN);
		char *buffer = malloc(size);
		strcpy(buffer, this->str);
		if (this->str) {
			free(this->str);
		}
		this->str = buffer;
		this->buffer = size;
	}
}

static void assign_c(String *this, char const *s) {
	StringDestroy(this);
	StringInit(this, s);
}

static void assign_s(String *this, String const *str) {
	assign_c(this, str->str);
}

static void append_c(String* this, char const *ap) {
	if (ap) {
		int length = strlen(ap);
		if (((int) this->buffer - (int) this->length - length - 1) < 0) {
			string_realloc(this, this->length + length + 1);
		}
		strcat(this->str, ap);
		this->length += length;
	}
}

static void append_s(String *this, String const *ap) {
	append_c(this, ap->str);
}

static char at(String *this, size_t pos) {
	if (this->length >= pos) {
		return this->str[pos];
	}
	return -1;
}

static void clear(String *this) {
	if (this->str) {
		this->str[0] = 0;
	}
	this->length = 0;
}

static int size(String *this) {
	return this->length;
}

static int compare_c(String *this, char const *str) {
	return strcmp(this->str, str);
}

static int compare_s(String *this, const String *str) {
	return compare_c(this, str->str);
}

static size_t copy(String *this, char *s, size_t n, size_t pos) {
	int i = 0;
	if (this->str && s) {
		while (n-- && pos < this->length) {
			s[i++] = this->str[pos++];
		}
		//s[i] = 0;
	}
	return i;
}

static char const* c_str(String * this) {
	return this->str;
}

static int empty(String* this) {
	if (this->length > 0) {
		return -1;
	}
	return 1;
}

static int find_c(String *this, char const *str, size_t pos) {
	if (this->length > pos) {
		char *find = strstr(&this->str[pos], str);
		if (find) {
			return find - this->str;
		}
	}
	return -1;
}

static int find_s(String *this, const String *str, size_t pos) {
	return find_c(this, str->str, pos);
}

static void insert_c(String *this, size_t pos, char const *str) {
	if (pos > this->length) {
		return append_c(this, str);
	}
	int length = strlen(str);
	if (((int) this->buffer - (int) this->length - length - 1) < 0) {
		string_realloc(this, this->length + length + 1);
	}
	strcpy(&this->str[pos] + length, &this->str[pos]);
	strncpy(&this->str[pos], str, length);
	this->length += length;
}

static void insert_s(String *this, size_t pos, String const *str) {
	insert_c(this, pos, str->str);
}

static int to_int(String *this) {
	return atoi(this->str);
}

static char **split_c(String *this, char separator) {
	char *str = strdup(this->str);
	char sep[2];
	sep[0] = separator;
	sep[1] = 0;
	int i = 0;
	strtok(str, sep);
	while (strtok(NULL, sep)) {
		i++;
	}
	char **tab = malloc((i + 1) * sizeof(char **));
	free(str);
	str = strdup(this->str);
	tab[0] = strtok(str, sep);
	i = 1;
	while ((tab[i++] = strtok(NULL, sep)));
	return tab;
}

static String *split_s(String *this, char separator) {
	char **tab = split_c(this, separator);
	int i = 0;
	while (tab[i++]);
	String *split = malloc(i * sizeof(String));
	while (i--) {
		StringInit(&split[i], tab[i]);
	}
	return split;
}

static void aff(String *this) {
	write(STDOUT_FILENO, this->str, this->length);
}

static void join_c(String *this, char delim, char const **tab) {
	clear(this);
	if (tab) {
		int i = 0;
		int length = 0;
		while (tab[i]) {
			length += strlen(tab[1]);
			i++;
		}
		length += i;
		string_realloc(this, length);
		i = 0;
		while (tab[i]) {
			append_c(this, tab[i]);
			if (tab[++i]) {
				this->str[this->length++] = delim;
			}
		}
	}
}

static void join_s(String *this, char delim, String *tab) {
	if (tab) {
		int i = 0;
		while (empty(&tab[i]) == 1) {
			i++;
		}
		char const **tab2 = malloc((i + 1) * sizeof(char *));
		tab2[i] = NULL;
		while (i > 0) {
			i--;
			tab2[i] = c_str(&tab[i]);
		}
		join_c(this, delim, tab2);
		free(tab2);
	}
}

static int substr_prepare(String *this, int *offset, int *length) {
	if (*offset >= 0 && (*offset + *length) <= (int) this->length) {
		return EXIT_SUCCESS;
	}
	if (*offset < 0) {
		if (*length <= 0) {
			return EXIT_FAILURE;
		}
		*length += *offset;
		*offset = 0;
		return substr_prepare(this, offset, length);
	}
	else if (*offset > (int) this->length) {
		if (*length >= 0) {
			return EXIT_FAILURE;
		}
		*offset += *length;
		*length = -*length;
		return substr_prepare(this, offset, length);
	}
	if (*length < 0) {
		*offset += *length;
		*length = -*length;
		return substr_prepare(this, offset, length);
	}
	if ((*offset + *length) > (int) this->length) {
		*length = this->length - *offset;
		return substr_prepare(this, offset, length);
	}
	return EXIT_FAILURE;
}

static String *substr(String *this, int offset, int length) {
	String *value;
	value = malloc(sizeof(String));
	StringInit(value, NULL);
	if (offset < 0) {
		offset = this->length + offset;
	}
	if (length < 0) {
		offset += length;
		length = -length;
	}
	if (substr_prepare(this, &offset, &length) == EXIT_FAILURE) {
		return value;
	}
	char *sub = strndup(&this->str[offset], length);
	StringInit(value, sub);
	free(sub);
	return value;
}
