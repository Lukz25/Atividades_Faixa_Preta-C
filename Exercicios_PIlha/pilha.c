#include "pilha.h"

void stack_init(pilha * p){
    p->topo = 0;
}

void push(pilha * p, stack_info item){
    p->itens[p->topo++] = item;
}

stack_info pop(pilha * p){
    return p->itens[--p->topo];
}

bool stack_isfull(pilha p){
    return (p.topo == MAX_PILHA);
}

bool stack_isempty(pilha p){
    return (p.topo == 0);
}

stack_info top(pilha p){
    return p.itens[p.topo-1];
}

void pilha_remover_ocorrencias(pilha*p, stack_info n){

    pilha p1;

    stack_init(&p1);
    int elementos = p->topo, i;

    for(i=0; i<elementos; i++){
        stack_info item;

        item = pop(p);

        if(item != n)
            push(&p1, item);
    }

    while(p1.topo > 0){

        stack_info item;

        item = pop(&p1);

        push(p, item);

    }

}

void ordenarPilha(pilha *p) {
    pilha ordenada;
    ordenada.topo = -1;

    while (p->topo != -1) {
        int atual = p->itens[p->topo--];

        while (ordenada.topo != -1 && ordenada.itens[ordenada.topo] > atual) {
            p->itens[++p->topo] = ordenada.itens[ordenada.topo--];
        }

        ordenada.itens[++ordenada.topo] = atual;
    }

    while (ordenada.topo != -1) {
        p->itens[++p->topo] = ordenada.itens[ordenada.topo--];
    }
}
