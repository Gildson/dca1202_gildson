#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funcao de comparacao da funcao qsort
int Comparador (const void * x, const void * y)
{
    if(*(float*)x < *(float*)y)
        return -1;
    else if(*(float*)x > *(float*)y)
        return 1;
    else
        return 0;
}

int main()
{
    float *x;
    int n;

    //Definindo quantos numeros seram alocados
    printf("quantidade de numeros\n");
    scanf("%d", &n);

    //Alocando o espaco de memoria
    x = (float*)malloc(n*sizeof(float));

    //Gerando os valores
    srand(time(0));
    for (int i=0; i<n; i++){
        x[i] = rand()%10;
    }

    //Chama a funcao qsort (v = vetor; n = quantidade de numeros; sizeof(float) = tamanho do especo de memoria; comparador = funcao utilizada
    //para comparar os valores do vetor)
    qsort(x, n, sizeof(float), Comparador);

    //Imprimi em ordem crescente os numeros gerados
    printf("Ordem crescente: ");
    for(int i = 0; i < n; i++)
        printf("%.1f ", x[i]);

    printf("\n");

    //Libera o espaco de memoria
    free(x);

    return 0;
}
