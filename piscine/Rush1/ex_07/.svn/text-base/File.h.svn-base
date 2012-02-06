/**
 *
 *
 *
 */

#ifndef __FILE_H__
#define __FILE_H__

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <string.h>
#include "object.h"

#define FILE_BUFFER_SIZE 1024
#define FILE_GET_NEXT_LINE 1024

extern Class *File;

#define is_File(__object) (instanceof(__object, File))

typedef enum {
	NO_ERROR,
	OPEN_FILE_FAILED,
	OTHER_FILE_ALREADY_OPEN,
	NO_FILE_OPEN,
	WRITE_ERROR,
	READ_ERROR
} FileError;

typedef struct FileClass_s {
	OBJECT;

	int fd;
	char const *filename;
	size_t writed;
	size_t readed;
	unsigned char *wbuffer;
	int wposition;
	int wreal;
	unsigned char *rbuffer;
	int rposition;
	int rreal;
	int error;

	char const *(*getFilename)(struct FileClass_s *);
	size_t(*getWrited)(struct FileClass_s *);
	size_t(*getReaded)(struct FileClass_s *);
	FileError(*getError)(struct FileClass_s *);
	bool(*isOpen)(struct FileClass_s *);
	bool(*open)(struct FileClass_s *, char const *, int);
	void(*close)(struct FileClass_s *);
	bool(*write)(struct FileClass_s *, void const *, size_t);
	bool(*writeString)(struct FileClass_s *, char const *);
	ssize_t(*flush)(struct FileClass_s *);
	void *(*read)(struct FileClass_s *, void *, size_t);
	char *(*getNextLine)(struct FileClass_s *);
} FileClass;

#endif
