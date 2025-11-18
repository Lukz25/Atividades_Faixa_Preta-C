
#include "termometro.h"


// Cria um termômetro a partir de uma temperatura em Celsius
Termometro criarTermometroCelsius(float temperatura){
    Termometro t;

    t.celsius = temperatura;

    return t;
}


// Cria um termômetro a partir de uma temperatura em Fahrenheit
Termometro criarTermometroFahrenheit(float temperatura){
    Termometro t;

    t.celsius = (temperatura-32)/1.8;

    return t;
}

// Cria um termômetro a partir de uma temperatura em Kelvin
Termometro criarTermometroKelvin(float temperatura){
    Termometro t;

    t.celsius = temperatura - 273.15;

    return t;
}

// Retorna a temperatura em graus Celsius
float obterCelsius(Termometro t){
    return t.celsius;
}

// Retorna a temperatura em graus Fahrenheit
float obterFahrenheit(Termometro t){
    return (t.celsius*1.8)+32;
}

// Retorna a temperatura em Kelvin
float obterKelvin(Termometro t){
    return t.celsius + 273.15;
}

// Verifica se a temperatura está em alerta de congelamento (<= 0°C)
// Retorna 1 se verdadeiro, 0 se falso
int verificarAlertaCongelamento(Termometro t){
    if(t.celsius <= 0)
        return 1;

    else
        return 0;
}

// Verifica se a temperatura está em alerta de ebulição (>= 100°C)
// Retorna 1 se verdadeiro, 0 se falso
int verificarAlertaEbulicao(Termometro t){
    if(t.celsius >= 100)
        return 1;

    else
        return 0;
}
