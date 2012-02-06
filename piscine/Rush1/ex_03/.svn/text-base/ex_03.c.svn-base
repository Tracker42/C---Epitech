
#include <stdlib.h>
#include <stdio.h>

#include "new.h"
#include "point.h"
#include "vertex.h"

int main()
{
    Object 
      * p1 = new(Point, 12, 13),
      * p2 = new(Point, 2, 2),
      * p3 = NULL,
      * p4 = NULL,
      * v1 = new(Vertex, 1, 2, 3),
      * v2 = new(Vertex, 4, 5, 6),
      * v3 = NULL,
      * v4 = NULL;

    p3 = add(p1, p2);
    printf("%s + %s = %s\n", str(p1), str(p2), str(p3));
    p4 = sub(p1, p2);
    printf("%s - %s = %s\n", str(p1), str(p2), str(p4));
    
    v3 = add(v1, v2);
    printf("%s + %s = %s\n", str(v1), str(v2), str(v3));
    v4 = sub(v1, v2);
    printf("%s - %s = %s\n", str(v1), str(v2), str(v4));

    delete(p1);
    delete(p2);
    delete(p3);
    delete(p4);
    delete(v1);
    delete(v2);
    delete(v3);
    delete(v4);

    return 0;
}
