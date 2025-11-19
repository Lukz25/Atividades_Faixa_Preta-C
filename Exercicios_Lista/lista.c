#include "lista.h"

void lst_init(lista * l){
    l->qtd = 0;
}

void lst_inserir(lista * l, lst_info val, int k){
    int i;
    for(i = l->qtd-1; i >= k; i--){
        l->dados[i+1] = l->dados[i];
    }

    l->dados[k] = val;
    l->qtd++;
}

lst_info lst_remover(lista* l, int k){
    lst_info ret = l->dados[k];
    l->qtd--;
    int i;
    for(i = k; i < l->qtd; i++){
        l->dados[i] = l->dados[i+1];
    }
    return ret;
}

lst_info lst_acessar(lista l, int k){
    return l.dados[k];
}

void lst_alterar(lista* l, lst_info val, int k){
    l->dados[k] = val;
}


bool lst_comparar(lista lista1, lista lista2){

    if(lista1.qtd != lista2.qtd)
        return 0;

    else{
        int i;

        for(i=0; i<lista1.qtd; i++){

            if(lista1.dados[i]!=lista2.dados[i])
                return 0;
        }

        return 1;

    }

}


void lst_dividir_metade(lista lista_original, lista* metade1, lista* metade2){

    int inicio, fim, meio, i, c=0;

    inicio = 0;
    fim = lista_original.qtd;

    meio = ceil((inicio+fim)/2);

    if(fim%2==0){
         for(i=0; i<meio; i++){
            lst_inserir(metade1,lista_original.dados[i],i);
        }

        for(i=meio; i<fim; i++, c++){
            lst_inserir(metade2,lista_original.dados[i],c);
        }
    }

    else{
         for(i=0; i<meio+1; i++){
            lst_inserir(metade1,lista_original.dados[i],i);
        }

        for(i=meio+1; i<fim; i++, c++){
            lst_inserir(metade2,lista_original.dados[i],c);
        }
    }




}
