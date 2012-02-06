/**
 *
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>

#define WRITE(str) printf("%s\n", (str))
#define LAPIN WRITE("LAPIN !!!"); return sum;
#define DEVANT WRITE("devant"); break;
#define DERRIERE WRITE("derriere"); break;
#define DROITE WRITE("droite"); break;
#define GAUCHE WRITE("gauche"); break;

int follow_the_white_rabbit(void) {
	int dice;
	int sum = 0;

	while (1) {
		dice = random() % 37 + 1;
		sum += dice;
		switch (dice) {
			case 1:
			case 37:
				LAPIN
			case 8:
			case 16:
			case 24:
			case 26:
			case 32:
				DERRIERE
			case 4:
			case 5:
			case 6:
			case 17:
			case 18:
			case 19:
			case 20:
			case 21:
			case 28:
				GAUCHE
			case 10:
			case 15:
			case 23:
				DEVANT
			case 13:
			case 34:
			case 35:
			case 36:
				DROITE
		}
		if (sum >= 397) {
			LAPIN
		}
	}
}