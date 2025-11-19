#include <stdio.h>
#include "lista.h"

int main()
{
    lista l1, metade1, metade2;
    int i;

    lst_init(&l1);
    lst_init(&metade1);
    lst_init(&metade2);

    for(i=0; i<3; i++)
        lst_inserir(&l1,i,i);


    for(i=0; i<3; i++)
        printf("%d ", l1.dados[i]);

    printf("\n");

    lst_dividir_metade(l1,&metade1,&metade2);

    for(i=0; i<metade1.qtd; i++)
        printf("%d ", metade1.dados[i]);

    printf("\n");

    for(i=0; i<metade2.qtd; i++)
        printf("%d ", metade2.dados[i]);

    printf("\n");

    return 0;
}
