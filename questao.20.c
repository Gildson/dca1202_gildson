//Explicação da bilbioteca libGC.
//Ele permite que você aloque memória basicamente como faria normalmente,
//sem desalocar explicitamente a memória que não é mais útil.
//O coletor recicla automaticamente a memória quando determina que não pode mais ser acessado.

//Pequeno Exemplo
#include "gc.h"
#include <assert.h>
#include <stdio.h>

int main ()
{
  int i;

  for (i = 0; i < 10000000; ++i)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     if (i % 100000 == 0)
       printf("Heap size = %d\n", GC_get_heap_size());
   }
  return 0;
}
