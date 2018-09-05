#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    int x, y;

    y = (3 - *p/(*q) + 7);

    p == &i  //verdadeira (valor igual a 1).
    *p - *q  //valor eh -2
    **&p     //valor eh 3
    3 - *p/(*q) + 7    //valor eh 10

    return 0;
}
