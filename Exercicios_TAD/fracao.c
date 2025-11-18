
#include "fracao.h"

Fracao criarFracao(int numerador, int denominador){

    Fracao f;

    f.numerador = numerador;
    f.denominador = denominador;

    return f;

}


Fracao simplificarFracao(Fracao f){

    int mdc;

    mdc = MDC(f.numerador, f.denominador);

    f.numerador /= mdc;
    f.denominador /= mdc;

    return f;

}


Fracao somarFracoes(Fracao f1, Fracao f2){

    Fracao f;

    if(f1.denominador == f2.denominador){
        f.denominador = f1.denominador;
        f.numerador = f1.numerador + f2.numerador;

    }

    else{

        Fracao MMCF1, MMCF2;

        MMCF1.denominador = f1.denominador * f2.denominador;
        MMCF2.denominador = f1.denominador * f2.denominador;

        MMCF1.numerador = (MMCF1.denominador/f1.denominador)*f1.numerador;
        MMCF2.numerador = (MMCF2.denominador/f2.denominador)*f2.numerador;

        f.denominador = MMCF1.denominador;
        f.numerador = MMCF1.numerador + MMCF2.numerador;

    }

    return f;
}

Fracao subtrairFracoes(Fracao f1, Fracao f2){

    Fracao f;

    if(f1.denominador == f2.denominador){
        f.denominador = f1.denominador;
        f.numerador = f1.numerador - f2.numerador;

    }

    else{

        Fracao MMCF1, MMCF2;

        MMCF1.denominador = f1.denominador * f2.denominador;
        MMCF2.denominador = f1.denominador * f2.denominador;

        MMCF1.numerador = (MMCF1.denominador/f1.denominador)*f1.numerador;
        MMCF2.numerador = (MMCF2.denominador/f2.denominador)*f2.numerador;

        f.denominador = MMCF1.denominador;
        f.numerador = MMCF1.numerador - MMCF2.numerador;

    }

    return f;
}

Fracao multiplicarFracoes(Fracao f1, Fracao f2){

    Fracao f;

    f.numerador = f1.numerador * f2.numerador;
    f.denominador = f1.denominador * f2.denominador;

    return f;

}


Fracao divisaoFracoes(Fracao f1, Fracao f2){

    int aux;

    aux = f1.numerador;
    f1.numerador = f1.denominador;
    f1.denominador = aux;


    return multiplicarFracoes(f1,f2);


}


int MDC(int a, int b){

    if(b == 0)
        return a;

    else
        return MDC(b, a%b);

}



