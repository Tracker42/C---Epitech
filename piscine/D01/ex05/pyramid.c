/**
 *
 *
 *
 *
 */

#define MIN(x, y) ((x) < (y) ? (x) : (y))

int pyramid_run(int size, int **map, int current, int pos);

int pyramid_path(int size, int **map) {
	return pyramid_run(size, map, 0, 0);
}

int pyramid_run(int size, int **map, int current, int pos) {
	if (current == size - 1) {
		return MIN(map[current][pos], map[current][pos + 1]);
	}
	return MIN(pyramid_run(size, map, current + 1, pos), pyramid_run(size, map, current + 1, pos + 1)) + map[current][pos];
}
