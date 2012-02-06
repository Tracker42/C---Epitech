/**
 *
 *
 *
 */

#include <ctype.h>
#include <stdio.h>

void menger(int size, int level);
int my_atoi(char *str);

int main(int argc, char **argv) {
	if (argc == 3) {
		menger(my_atoi(argv[1]), my_atoi(argv[2]));
	}
	return 0;
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
