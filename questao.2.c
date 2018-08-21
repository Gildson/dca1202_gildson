#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    int x, y;

    x = (*p - *q);
    y = (3 - *p/(*q) + 7);

    if (p == &i)   //sao iguais.
    {
        printf("sim");
    }
    else
        printf("nao");
    printf("\n");
    printf("%d", x);    //-2
    printf("\n");
    printf("%d", **&p);     //3
    printf("\n");
    printf("%d", y);     //10

    return 0;
}
