#include <stdio.h>
#include "termometro.h"
#include "fracao.h"

int main()
{
    int n1, d1, n2, d2;
    Fracao f1, f2, res;

    scanf("%D %D", &n1, &d1);
    scanf("%D %D", &n2, &d2);

    f1 = criarFracao(n1,d1);
    f2 = criarFracao(n2,d2);

    res = somarFracoes(f1,f2);
    printf("%d/%d\n", res.numerador, res.denominador);

    res = divisaoFracoes(f1,f2);
    printf("%d/%d\n", res.numerador, res.denominador);

    res = multiplicarFracoes(f1,f2);
    printf("%d/%d\n", res.numerador, res.denominador);

    res = subtrairFracoes(f1,f2);
    printf("%d/%d\n", res.numerador, res.denominador);

    return 0;
}
