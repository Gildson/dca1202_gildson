#include <stdio.h>
#include <stdlib.h>

void soma(int *vetor1, int *vetor2, int *vetor3, int *n){
    for (int i=0; i<n; i++){
        vetor3[i] = (vetor1[i] + vetor2[i]);
    }
    for (int i=0; i<n; i++){
        printf("%d", vetor3[i]);
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Quanl o tamanho do vetor?\n");
    scanf("%d", &n);
    int *vetor1, *vetor2, *vetor3, *vetor;
    vetor = (int*)malloc(n*sizeof(int));
    vetor1 = (int*)malloc(n*sizeof(int));
    vetor2 = (int*)malloc(n*sizeof(int));
    vetor3 = (int*)malloc(n*sizeof(int));

    printf("Digite os elementos do primeiro vetor\n");
    for (int i=0; i<n; i++){
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor\n");
    for (int i=0; i<n; i++){
        scanf("%d", &vetor2[i]);
    }

    printf("Elementos do terceiro vetor\n");
    soma(vetor1, vetor2, vetor3, n);

    free(vetor1);
    free(vetor2);
    free(vetor3);
    return 0;
}
