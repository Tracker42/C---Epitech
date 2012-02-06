
#include <stdio.h>

#include "new.h"
#include "point.h"
#include "vertex.h"

int main()
{
    Object * point = new(Point, 42, -42);
    Object * vertex = new(Vertex, 0, 1, 2);

    printf("%s  = %s\n", ((Class *) point)->__name__, str(point));
    printf("vertex = %s\n", str(vertex));

    printf("point  = %s\n", str(point));
    printf("vertex = %s\n", str(vertex));

    printf("point  = %s\n", str(point));
    printf("vertex = %s\n", str(vertex));

    delete(point);
    delete(vertex);

    point = new(Point, 0, 0);
    vertex = new(Vertex, 0, -1, -2);
    printf("point  = %s\n", str(point));
    printf("vertex = %s\n", str(vertex));
    delete(point);
    delete(vertex);

    return 0;
}
