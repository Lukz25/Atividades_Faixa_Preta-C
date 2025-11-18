#include <stdio.h>
#include "termometro.c"

int main()
{
    float temp;
    Termometro t;

    scanf("%f", &temp);

    t = criarTermometroCelsius(temp);

    printf("%.1f C\n", obterCelsius(t));
    printf("%.1f F\n", obterFahrenheit(t));
    printf("%.1f K\n", obterKelvin(t));

    if(verificarAlertaCongelamento(t))
        printf("Trincando\n");

    else if(verificarAlertaEbulicao(t))
        printf("Pelando\n");

    else
        printf("Normal\n");
    return 0;
}
