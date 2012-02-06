/**
 *
 *
 *
 */

#include "File.h"
#include "FileStatic.h"

static void __constructor(FileClass *file) {
	file->fd = -1;
	file->filename = NULL;
	file->writed = 0;
	file->readed = 0;
	file->wbuffer = NULL;
	file->wposition = 0;
	file->wreal = 0;
	file->rbuffer = NULL;
	file->rposition = 0;
	file->rreal = 0;
	file->error = 0;
}

static void __destructor(FileClass *file) {
	if (file->fd != -1) {
		File_close(file);
	}
	if (file->wbuffer) {
		free(file->wbuffer);
	}
	if (file->rbuffer) {
		free(file->rbuffer);
	}
}

static bool __write(FileClass *file) {
	if (!file->wbuffer) {
		return true;
	}
	file->wreal = write(file->fd, file->wbuffer, file->wposition);
	file->wposition = 0;
	file->writed += file->wreal;
	if (file->wreal != file->wposition) {
		file->error = WRITE_ERROR;
		return false;
	}
	return true;
}

static bool __read(FileClass *file) {
	if (!file->rbuffer) {
		file->rbuffer = malloc(FILE_BUFFER_SIZE);
	}
	file->rreal = read(file->fd, file->rbuffer, FILE_BUFFER_SIZE);
	file->rposition = 0;
	file->readed += file->rreal;
	if (file->rreal == -1) {
		file->error = READ_ERROR;
		return false;
	}
	if (file->rreal == 0) {
		file->rreal = -1;
	}
	return true;
}

static char const *File_getFilename(FileClass *file) {
	if (!instanceof(file, File)) {
		return NULL;
	}
	return file->filename;
}

static size_t File_getWrited(FileClass *file) {
	if (!instanceof(file, File)) {
		return 0;
	}
	return file->writed;
}

static size_t File_getReaded(FileClass *file) {
	if (!instanceof(file, File)) {
		return 0;
	}
	return file->readed;
}

static FileError File_getError(FileClass *file) {
	if (!instanceof(file, File)) {
		return 0;
	}
	return file->error;
}

static bool File_isOpen(FileClass *file) {
	if (!instanceof(file, File)) {
		return false;
	}
	return file->fd != -1;
}

static bool File_open(FileClass *file, char const *filename, int flags) {
	if (!instanceof(file, File)) {
		return false;
	}
	int fd;
	if (file->fd != -1) {
		file->error = OTHER_FILE_ALREADY_OPEN;
		return false;
	}
	if ((fd = open(filename, flags)) != -1) {
		file->fd = fd;
		file->filename = strdup(filename);
	}
	file->error = OPEN_FILE_FAILED;
	return false;
}

static void File_close(FileClass *file) {
	if (!instanceof(file, File)) {
		return;
	}
	if (file->fd != -1) {
		if (file->wposition != 0) {
			write(file->fd, file->wbuffer, file->wposition);
		}
		close(file->fd);
	}
}

static bool File_write(FileClass *file, void const *buffer, size_t count) {
	if (!instanceof(file, File)) {
		return false;
	}
	unsigned char const *wbuffer = (unsigned char const *) buffer;
	if (file->fd == -1) {
		file->error = NO_FILE_OPEN;
		return false;
	}
	if (!file->wbuffer) {
		file->wbuffer = malloc(FILE_BUFFER_SIZE);
	}
	unsigned int i = 0;
	while (i < count) {
		file->wbuffer[file->wposition++] = wbuffer[i++];
		if (file->wposition >= FILE_BUFFER_SIZE) {
			File_flush(file);
		}
	}
	return true;
}

static bool File_writeString(FileClass *file, char const *string) {
	if (!instanceof(file, File)) {
		return false;
	}
	return File_write(file, string, strlen(string));
}

static ssize_t File_flush(FileClass *file) {
	if (!instanceof(file, File)) {
		return false;
	}
	if (file->fd == -1) {
		file->error = NO_FILE_OPEN;
	}
	int position = file->wposition;
	if (position && __write(file)) {
		return -1;
	}
	return file->wreal;
}

static void *File_read(FileClass *file, void *buffer, size_t count) {
	if (!instanceof(file, File)) {
		return NULL;
	}
	unsigned char *rbuffer = (unsigned char *) buffer;
	int alloc = 0;
	if (!rbuffer) {
		alloc = 1;
		rbuffer = malloc(count);
		memset(rbuffer, 0, count);
	}
	size_t i = 0;
	while (i < count) {
		if (file->rposition >= file->rreal) {
			__read(file);
			if (file->rreal == -1) {
				if (i) {
					break;
				}
				if (alloc) {
					free(rbuffer);
				}
				return NULL;
			}
			else if (file->rreal == 0) {
				break;
			}
		}
		rbuffer[i++] = file->rbuffer[file->rposition++];
	}
	return rbuffer;
}

static char *File_getNextLine(FileClass *file) {
	if (!instanceof(file, File)) {
		return NULL;
	}
	char *buffer = malloc(FILE_GET_NEXT_LINE + 1);
	memset(buffer, 0, FILE_GET_NEXT_LINE + 1);
	int i = 0;
	while (i < FILE_GET_NEXT_LINE) {
		if (file->rposition >= file->rreal) {
			__read(file);
			if (file->rreal == -1 || (file->rreal == 0 && !i)) {
				free(buffer);
				return NULL;
			}
		}
		if (file->rbuffer[file->rposition] == '\n') {
			file->rposition++;
			i++;
			break;
		}
		buffer[i++] = file->rbuffer[file->rposition++];
	}
	buffer[i - 1] = 0;
	return buffer;
}
