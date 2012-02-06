#include <stdio.h>
#include "new.h"
#include "point.h"

int main()
{
    Object* tab[100];
    unsigned int i;

    for (i = 0; i < 100; i++)
      {
        tab[i] = new(Point);
	printf("Creation n°%i\n", i + 1);
      }
    for (i = 0; i < 100; i++)
      {
        delete(tab[i]);
	printf("Suppresion n°%i\n", i + 1);
      }
    return 0;
}
