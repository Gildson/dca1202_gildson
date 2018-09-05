#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int *p;
    int *q;

    printf("%d", p = i);
    printf("\n");
    printf("%d", q = &j);
    printf("\n");
    printf("%d", p = &*&i);
    printf("\n");
    // a expressao i = (*&)j eh uma expressão de atribuição ilegal.
    printf("%d", i = *&j);
    printf("\n");
    printf("%d", i = *&*&j);
    printf("\n");
    printf("%d", q = *p);
    printf("\n");
    printf("%d", i = (*p)++ + *q);

    return 0;
}
