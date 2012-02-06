/**
 *
 *
 *
 */

#include <stdint.h>

#include "drawing.h"
#include "bitmap.h"

void menger(uint32_t **img, int size, int level);
void menger_run(uint32_t **img, int size, int level, int offsetx, int offsety);
uint32_t get_color(int level);

void menger(uint32_t **img, int size, int level) {
	if (level < size) {
		menger_run(img, size, level, 0, 0);
	}
}

void menger_run(uint32_t **img, int size, int level, int offsetx, int offsety) {
	int div;
	t_point point;
	if (!(size % 3) && level > 0 && level < size) {
		div = size / 3;
		point.x = div + offsetx;
		point.y = div + offsety;
		draw_square(img, &point, div, get_color(level));
		level--;
		menger_run(img, div, level, offsetx, offsety);
		menger_run(img, div, level, offsetx, offsety + div);
		menger_run(img, div, level, offsetx, offsety + 2 * div);
		menger_run(img, div, level, offsetx + div, offsety);
		menger_run(img, div, level, offsetx + div, offsety + 2 * div);
		menger_run(img, div, level, offsetx + 2 * div, offsety);
		menger_run(img, div, level, offsetx + 2 * div, offsety + div);
		menger_run(img, div, level, offsetx + 2 * div, offsety + 2 * div);
	}
}

uint32_t get_color(int level) {
	uint32_t color;
	unsigned char *bytes = (unsigned char *) &color;
	bytes[0] = 0;
	bytes[1] = 0xFF / (level);
	bytes[2] = bytes[1];
	bytes[3] = bytes[1];
	fix_endian(&color, sizeof(uint32_t));
	return color;
}
