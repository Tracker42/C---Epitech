/**
 *
 *
 *
 *
 */

#include <stdlib.h>

void tab_to_2dtab(int *tab, int length, int width, int ***res) {
	*res = malloc(length * sizeof(int *));
	int i;
	int j;
	for(i = 0; i < length; i++) {
		(*res)[i] = malloc(width * sizeof(int));
		for(j = 0; j < width; j++) {
			(*res)[i][j] = tab[i * width + j];
		}
	}
}
