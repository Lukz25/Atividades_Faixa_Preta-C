#include "fila.h"
#include <stdio.h>

void queue_init(fila * f){
    f->qtd_elementos = f->comeco = f->fim = 0;
}
void enqueue(fila * f, queue_info val){
    f->dados[f->fim] = val;
    f->fim = (f->fim + 1)%MAX_QUEUE;
    f->qtd_elementos++;
}
queue_info dequeue(fila * f){
    queue_info ret = f->dados[f->comeco];
    f->comeco = (f->comeco+1)%MAX_QUEUE;
    f->qtd_elementos--;
    return ret;
}
bool queue_isempty(fila f){
    return f.qtd_elementos == 0;
}
bool queue_isfull(fila f){
    return f.qtd_elementos == MAX_QUEUE;
}

void print_queue(fila f){
    int i = f.comeco, j;
    for(j = 0; j < f.qtd_elementos; j++){
        printf("[%d]", f.dados[i]);
        i = (i+1)%MAX_QUEUE;
    }
    printf("\n");
}


void intercalar_filas(fila *f1, fila *f2, fila *res){


    if(res->qtd_elementos == MAX_QUEUE)
        exit(1);

    else{
        int i=0, j=0, c=0;

        while(i<f1->qtd_elementos&&j<f2->qtd_elementos){

            if(c%2==0){
                enqueue(res,f1->dados[i]);
                i++;
            }

            else{

                enqueue(res,f2->dados[j]);
                j++;
            }

            c++;
        }

    }

}



void rotacionar_fila(fila *f, int k){

    int i, indice;
    queue_info item;

    for(i=0; i<f->qtd_elementos; i++){

        if(i==0){
            item = f->dados[(i+k)%f->qtd_elementos];
            f->dados[(i+k)%f->qtd_elementos] = f->dados[i];
            indice = (i+k)%f->qtd_elementos;
        }


        else{

            item = f->dados[indice];
            indice = (i+k)%f->qtd_elementos;
            f->dados[indice] = item;
        }


    }



}
