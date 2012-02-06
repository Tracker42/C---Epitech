/**
 *
 *
 *
 */

#include <stdio.h>

void menger(int size, int level);
void menger_run(int size, int level, int offsetx, int offsety);
void menger_print(int size, int x, int y);

void menger(int size, int level) {
	if (level < size) {
		menger_run(size, level, 0, 0);
	}
}

void menger_run(int size, int level, int offsetx, int offsety) {
	int div;
	if (!(size % 3) && level > 0 && level < size) {
		div = size / 3;
		menger_print(div, div + offsetx, div + offsety);
		level--;
		menger_run(div, level, offsetx, offsety);
		menger_run(div, level, offsetx, offsety + div);
		menger_run(div, level, offsetx, offsety + 2 * div);
		menger_run(div, level, offsetx + div, offsety);
		menger_run(div, level, offsetx + div, offsety + 2 * div);
		menger_run(div, level, offsetx + 2 * div, offsety);
		menger_run(div, level, offsetx + 2 * div, offsety + div);
		menger_run(div, level, offsetx + 2 * div, offsety + 2 * div);
	}
}

void menger_print(int size, int x, int y) {
	printf("%03i %03i %03i\n", size, x, y);
}
