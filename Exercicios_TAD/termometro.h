#ifndef TERMOMETRO_H_INCLUDED
#define TERMOMETRO_H_INCLUDED
typedef struct {
    float celsius;
} Termometro;

// Cria um termômetro a partir de uma temperatura em Celsius
Termometro criarTermometroCelsius(float temperatura);

// Cria um termômetro a partir de uma temperatura em Fahrenheit
Termometro criarTermometroFahrenheit(float temperatura);

// Cria um termômetro a partir de uma temperatura em Kelvin
Termometro criarTermometroKelvin(float temperatura);

// Retorna a temperatura em graus Celsius
float obterCelsius(Termometro t);

// Retorna a temperatura em graus Fahrenheit
float obterFahrenheit(Termometro t);

// Retorna a temperatura em Kelvin
float obterKelvin(Termometro t);

// Verifica se a temperatura está em alerta de congelamento (<= 0°C)
// Retorna 1 se verdadeiro, 0 se falso
int verificarAlertaCongelamento(Termometro t);

// Verifica se a temperatura está em alerta de ebulição (>= 100°C)
// Retorna 1 se verdadeiro, 0 se falso
int verificarAlertaEbulicao(Termometro t);


#endif // TERMOMETRO_H_INCLUDED
