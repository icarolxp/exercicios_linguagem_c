#include <stdio.h>

int main() {
    float tempoGasto, velocidadeMedia, distancia, litrosGasto;

    printf("Digite o tempo gasto na viagem em horas: ");
    scanf("%f", &tempoGasto);
    printf("Digite a velocidade media em km/h: ");
    scanf("%f", &velocidadeMedia);

    distancia = tempoGasto * velocidadeMedia;

    litrosGasto = distancia / 12.0; // Consumo de 12 km/litro

    printf("\nDistancia percorrida: %.2f km\n", distancia);
    printf("Quantidade de combustivel gasto: %.2f litros\n", litrosGasto);

    return 0;
}
