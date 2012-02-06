
#include <stdio.h>
#include <assert.h>

#include <stdlib.h>
#include <string.h>
#include "char.h"
#include "int.h"
#include "float.h"
#include "new.h"

void test(Object* a, Object* b, Object* c) {
	
  printf("a = %s, b = %s, c = %s\n", str(a), str(b), str(c));
  assert(eq(a, b));
  assert(!gt(a, b));
  assert(!lt(a, b));
  assert(!eq(a, c));
  assert(eq(a, b));
  assert(gt(c, a));
  printf("Test de l'operation booleene  (%s == %s)\n", str(a), str(b));
  assert(eq(a, b));
  printf("Reussi !\n");
  printf("Test de l'operation booleene  !(%s > %s)\n", str(a), str(b));
  assert(!gt(a, b));
  printf("Reussi !\n");
  printf("Test de l'operation booleene  !(%s < %s)\n", str(a), str(b));
  assert(!lt(a, b));
  printf("Reussi !\n");
  printf("Test de l'operation booleene !(%s == %s)\n", str(a), str(c));
  assert(!eq(a, c));
  printf("Reussi !\n");
  printf("Test de l'operation booleene  (%s == %s)\n", str(a), str(b));
  assert(eq(a, b));
  printf("Reussi !\n");
  printf("Test de l'operation booleene   (%s > %s)\n", str(c), str(a));
  assert(gt(c, a));
  printf("Reussi !\n");
  delete(a);
  delete(b);
  delete(c);
}

//	printf("b / a = %s\n", str(div(b, a)));

int main() {
  printf("----Test de la Class Int----\n\n");
  test(new(Int, 42), new(Int, 42), new(Int, 66));
  printf("\n----Test de la Class Char----\n\n");
  test(new(Char, 'A'), new(Char, 'A'), new(Char, 'Z'));
  printf("\n----Test de la Class Float----\n\n");
  test(new(Float, 42.42f), new(Float, 42.42f), new(Float, 66.66f));
  //compareAndDivide(new(Int, atoi(av[1])),new(Int,atoi(av[2])));
  return 0;
}
