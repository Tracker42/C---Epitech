/**
 *
 *
 *
 */

#ifndef __FILE_STATIC_H__
#define __FILE_STATIC_H__

#include "File.h"

static void __constructor(FileClass *file);
static void __destructor(FileClass *file);
static bool __write(FileClass *file);
static bool __read(FileClass *file);
static char const *File_getFilename(FileClass *file);
static size_t File_getWrited(FileClass *file);
static size_t File_getReaded(FileClass *file);
static FileError File_getError(FileClass *file);
static bool File_isOpen(FileClass *file);
static bool File_open(FileClass *file, char const *filename, int flags);
static void File_close(FileClass *file);
static bool File_write(FileClass *file, void const *buffer, size_t count);
static bool File_writeString(FileClass *file, char const *string);
static ssize_t File_flush(FileClass *file);
static void *File_read(FileClass *file, void *buffer, size_t count);
static char *File_getNextLine(FileClass *file);

static ClassDescriptor __descriptor__ = {
	0x46696C65, //File
	sizeof (FileClass),
	"File",
	(constructor) & __constructor,
	(destructor) & __destructor
};

static FileClass __file__ = {
	//Class
	&__descriptor__,

	//Args
	-1,
	NULL,
	0,
	0,
	NULL,
	0,
	0,
	NULL,
	0,
	0,
	0,

	//Method
	&File_getFilename,
	&File_getWrited,
	&File_getReaded,
	&File_getError,
	&File_isOpen,
	&File_open,
	&File_close,
	&File_write,
	&File_writeString,
	&File_flush,
	&File_read,
	&File_getNextLine
};

Class *File = (Class *) & __file__;

#endif
