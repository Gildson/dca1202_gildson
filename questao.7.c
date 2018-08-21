#include <stdio.h>

int main()
{
    int pulo[5];

    for (int i=0; i<5; i++){
        scanf("%d", &pulo[i]);
    }
    printf("%d", *(pulo + 2));
    printf("%d", *(pulo + 4));
    //printf("%d", pulo + 4);
    //printf("%d", pulo + 2);

    //apenas a expressão *(pulo + 2) refereci ao terceiro elemento do vetor pulo.

    return 0;
}
