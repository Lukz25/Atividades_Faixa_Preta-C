#include <stdio.h>
#include "fila.h"

int main()
{
    fila f1,f2,res;
    int i;
    queue_init(&f1);
    queue_init(&f2);
    queue_init(&res);

    for(i=1; i<MAX_QUEUE; i++){
        if(i%2==0)
            enqueue(&f1,i);

        else
            enqueue(&f2,i);
    }

    intercalar_filas(&f1,&f2,&res);

    for(i=0; i<res.qtd_elementos;i++)
        printf("%d ", res.dados[i]);

    return 0;
}
