/**
 *
 *
 *
 **/

#include "drawing.h"

void draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color) {
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++) {
			img[orig->x + i][orig->y + j] = color;
		}
	}
}
