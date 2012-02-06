/**
 *
 *
 *
 *
 */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

#include "bitmap.h"

void menger(uint32_t **img, int size, int level);
int my_atoi(char *str);

int main(int argc, char **argv) {
	if (argc != 4) {
		write(STDERR_FILENO, "menger_face file_name size level\n", 33);
		return EXIT_FAILURE;
	}
	int size = my_atoi(argv[2]);
	int level = my_atoi(argv[3]);
	t_bmp_header header;
	t_bmp_info_header info;
	make_bmp_header(&header, size);
	make_bmp_info_header(&info, size);
	uint32_t *img = malloc(size * size * sizeof(uint32_t));
	uint32_t **tab_img = malloc(size * sizeof(uint32_t *));
	for(int i = 0; i < size; i++) {
		tab_img[i] = img + (i * size);
		for(int j = 0; j < size; j++) {
			tab_img[i][j] = 0;
		}
	}
	menger(tab_img, size, level);
	int fd = open(argv[1], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	write(fd, &header, sizeof(header));
	write(fd, &info, sizeof(info));
	write(fd, img, size * size * sizeof(uint32_t));
	close(fd);
	return EXIT_SUCCESS;
}

int my_atoi(char *str) {
	int num = 0;
	int i = 0;
	while (isdigit(str[i])) {
		num = num * 10 + str[i] - 48;
		i++;
	}
	return num;
}
