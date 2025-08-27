#include <stdio.h>

int main() {
    float valorCompra, valorPrestacao;
    printf("Digite o valor total da compra: ");
    scanf("%f", &valorCompra);

    valorPrestacao = valorCompra / 5.0;

    printf("O valor de cada uma das 5 prestacoes e: R$ %.2f\n", valorPrestacao);

    return 0;
}
