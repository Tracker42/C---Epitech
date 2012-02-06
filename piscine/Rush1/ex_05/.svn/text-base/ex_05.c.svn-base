
#include <stdio.h>
#include <assert.h>

#include "array.h"
#include "int.h"
#include "float.h"
#include "char.h"
#include "new.h"


int main()
{
  Object* arrayInt = new(Array, 10, Int, 42);
  Object* itInt = begin(arrayInt);
  Object* it_endInt = end(arrayInt);
  Object* arrayFloat = new(Array, 11, Float, 42);
  Object* itFloat = begin(arrayFloat);
  Object* it_endFloat = end(arrayFloat);
  Object* arrayChar = new(Array, 12, Char, '*');
  Object* itChar = begin(arrayChar);
  Object* it_endChar = end(arrayChar);

  printf("\n----Test De La Classe Int----\n");
  printf("array size: %zu\n", len(arrayInt));
  setitem(arrayInt, 5, 0x42);
  setitem(arrayInt, 6, 0x42);
  (*((Iterator *) itInt)->__setval__)(itInt, 0x42);
  while (lt(itInt, it_endInt))
    {
      printf("%s\n", str(getval(itInt)));
      incr(itInt);
    }
  delete(itInt);
  delete(it_endInt);
  delete(arrayInt);
  printf("\n----Test De La Classe Float----\n");
  printf("array size: %zu\n", len(arrayFloat));
  setitem(arrayFloat, 5, 42.42);
  setitem(arrayFloat, 6, 42.42);
  (*((Iterator *) itFloat)->__setval__)(itFloat, 0x42);
  while (lt(itFloat, it_endFloat))
    {
      printf("%s\n", str(getval(itFloat)));
      incr(itFloat);
    }
  delete(itFloat);
  delete(it_endFloat);
  delete(arrayFloat);

  printf("\n----Test De La Classe Char----\n");
  printf("array size: %zu\n", len(arrayChar));
  setitem(arrayChar, 5, 0x42);
  setitem(arrayChar, 6, 0x42);
  (*((Iterator *) itChar)->__setval__)(itChar, 0x42);
  while (lt(itChar, it_endChar))
    {
      printf("%s\n", str(getval(itChar)));
      incr(itChar);
    }
  delete(itChar);
  delete(it_endChar);
  delete(arrayChar);

  return 0;
}
