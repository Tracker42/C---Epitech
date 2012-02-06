/**
 *
 *
 *
 */

#include <string.h>
#include <stdlib.h>
#include "bitmap.h"

void make_bmp_header(t_bmp_header *header, size_t size) {
	memset(header, 0, sizeof(*header));
	header->magic = BMP_MAGIC;
	header->size = size * size * sizeof(int) + sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
	header->offset = sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
	fix_endian(&header->magic, sizeof(header->magic));
}

void make_bmp_info_header(t_bmp_info_header *header, size_t size) {
	memset(header, 0, sizeof(*header));
	header->size = 40;
	header->height = size;
	header->width = size;
	header->raw_data_size = size * size * 4;
	header->planes = 1;
	header->bpp = 32;
}

void fix_endian(void *data, ssize_t size) {
	int endian = 1;
	unsigned char *bytes = (unsigned char *) &endian;
	if (bytes[0] != '\0') {
		unsigned char *cdata = data;
		unsigned char tmp;
		for(int i = 0; i < size / 2; i++) {
			tmp = cdata[i];
			cdata[i] = cdata[size - i - 1];
			cdata[size - i - 1] = tmp;
		}
	}
}
