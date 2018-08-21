#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    //b7186cbc   7   5    15   9

    return 0;
}
