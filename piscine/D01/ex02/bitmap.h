/**
 *
 *
 *
 */

#ifndef __BITMAP_H__
#define __BITMAP_H__

#include <stdint.h>

#define BMP_MAGIC 0x424D

typedef struct __attribute__((packed)) s_bmp_header {
	int16_t magic;
	int32_t size;
	int16_t _app1;
	int16_t _app2;
	int32_t offset;
} t_bmp_header;

typedef struct __attribute__((packed)) s_bmp_info_header {
	int32_t size;
	uint32_t width;
	uint32_t height;
	int16_t planes;
	int16_t bpp;
	int32_t compression;
	int32_t raw_data_size;
	int32_t h_resolution;
	int32_t v_resolution;
	int32_t palette_size;
	int32_t important_colors;
} t_bmp_info_header;

/*bitmap_header.c*/
void make_bmp_header(t_bmp_header *header, size_t size);
void make_bmp_info_header(t_bmp_info_header *header, size_t size);
void fix_endian(void *data, ssize_t size);

#endif
