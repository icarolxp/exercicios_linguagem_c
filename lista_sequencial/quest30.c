#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    // Custo apos impostos (45%) e distribuidor (28%)
    // Custo apos impostos: custoFabrica * 1.45
    // Custo apos distribuidor: (custoFabrica * 1.45) * 1.28
    custoConsumidor = custoFabrica * 1.45 * 1.28;

    printf("O custo ao consumidor do carro e: R$ %.2f\n", custoConsumidor);

    return 0;
}
