#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, i;
    float *x, aux;

    //Definindo quantos numeros seram alocados
    printf("quantidade de numeros");
    scanf("%d", &n);

    //Alocando o espaco de memoria
    x = (float*)malloc(n*sizeof(float));

    //Gerando os valores
    srand(time(0));
    for (i=0; i<n; i++){
        x[i] = rand()%10;
    }

    //Ordenando os valores gerados
    for (i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (x[i] < x[j]){
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
        }
      }
    }

    //Imprimindo os valores ordenados
    for (i=0; i<n; i++){
        printf("%.1f", x[i]);
        printf("\n");
    }

    //Liberando o especo de memoria alocado
    free(x);
    return 0;
}
