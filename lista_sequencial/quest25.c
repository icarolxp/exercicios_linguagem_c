#include <stdio.h>

int main() {
    float distancia_km, velocidade_kmh, tempo_horas, velocidade_ms;

    printf("Digite a distancia entre dois pontos em KM: ");
    scanf("%f", &distancia_km);
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade_kmh);

    // Tempo em horas
    tempo_horas = distancia_km / velocidade_kmh;

    // Velocidade em metros/segundo (1 km/h = 1000m / 3600s = 1/3.6 m/s)
    velocidade_ms = velocidade_kmh / 3.6;

    printf("Tempo medio para a chegada: %.2f horas\n", tempo_horas);
    printf("Velocidade em metros/segundo: %.2f m/s\n", velocidade_ms);

    return 0;
}
