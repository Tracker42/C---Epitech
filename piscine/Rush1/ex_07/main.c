/**
 *
 *
 *
 */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#include "new.h"
#include "File.h"
#include "Int.h"

int main(int argc, char **argv) {

	printf("Ce programme presente la class File et l'implementation d'un type primitif (int)\n");
	printf("Il est necessaire de donner le nom de deux fichiers existant pour tester la class File");

	if (argc >= 2) {
		printf("Test de la class File avec '%s' et '%s' :\n", argv[1], argv[2]);

		FileClass *file1 = new(File);
		FileClass *file2 = new(File);

		file1->open(file1, argv[1], O_RDONLY);
		file2->open(file2, argv[2], O_WRONLY);

		char *buffer;
		while ((buffer = file1->getNextLine(file1))) {
			file2->writeString(file2, "=> ");
			file2->writeString(file2, buffer);
			file2->writeString(file2, "\n");
		}
		file2->flush(file2);
		delete(file1);
		delete(file2);
	}
	else {
		printf("Pas de nom de fichier, partie 1 ignoré!\n");
	}

	printf("Test mode saisie > fichier 'out'\n");
	FileClass *file = new(File);
	file->open(file, "out", O_WRONLY);

	char buf[100];
	int r;
	while ((r = read(STDIN_FILENO, buf, 100))) {
		file->write(file, buf, r);
		file->write(file, "\n", r);
	}
	file->flush(file);
	printf("%i caracteres ecrit\n", (int) file->getWrited(file));
	file->close(file);
	delete(file);

	printf("\nTest de la class Int :\n");

	printf("Déclaration de 3 entiers (19) (42) (-24)\n");
	IntClass *a = new (Int, 19);
	IntClass *b = new (Int, 42);
	IntClass *c = new (Int, -24);

	printf("%i + %i = %i\n", get(a), get(b), get(add(a, b)));
	printf("%i %% %i = %i\n", get(c), get(a), get(mod(c, a)));

	printf("set %i : %i =>", get(a), get(b));
	set(a, b);
	printf(" %i\n", get(a));

	printf("%i == %i : %i\n", get(a), get(b), eq(a, b));
	printf("%i == %i : %i\n", get(a), get(c), eq(a, c));
	printf("%i < %i : %i\n", get(a), get(c), lt(a, c));
	printf("%i >= %i : %i\n", get(b), get(c), ge(b, c));

	return 0;
}
