#include <stdio.h>
#include "pilha.h"
#include <time.h>

int main()
{
    pilha p;
    int i;
    stack_info n;

    stack_init(&p);

    for(i=1; i<MAX_PILHA+1; i++){
        if(i%2 == 0)
            push(&p, i);

        else
            push(&p, 0);
    }

    n=0;

    for(i=0; i<p.topo; i++)
        printf("%d ", p.itens[i]);

    printf("\n");

    pilha_remover_ocorrencias(&p,n);

    for(i=0; i<p.topo; i++)
        printf("%d ", p.itens[i]);

    printf("\n");


    return 0;
}
