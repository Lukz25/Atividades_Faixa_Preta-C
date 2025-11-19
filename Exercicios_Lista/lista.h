#ifndef _LISTA_H
#define _LISTA_H

#define MAX_LISTA 10
#include <stdbool.h>
#include <math.h>

typedef int lst_info;
typedef struct {
    lst_info dados[MAX_LISTA];
    int qtd;
} lista;


void lst_init(lista *);
void lst_inserir(lista *, lst_info, int);
lst_info lst_remover(lista*, int);
lst_info lst_acessar(lista, int);
void lst_alterar(lista*, lst_info, int);
bool lst_comparar(lista , lista );
void lst_dividir_metade(lista , lista* , lista* );
#endif // _LISTA_H
