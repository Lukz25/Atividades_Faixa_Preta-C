// fracao.h
#ifndef FRACAO_H
#define FRACAO_H

typedef struct {
    int numerador;
    int denominador;
} Fracao;

Fracao criarFracao(int numerador, int denominador);
Fracao simplificarFracao(Fracao f);
Fracao somarFracoes(Fracao f1, Fracao f2);
Fracao subtrairFracoes(Fracao f1, Fracao f2);
Fracao multiplicarFracoes(Fracao f1, Fracao f2);
Fracao divisaoFracoes(Fracao f1, Fracao f2);

#endif
