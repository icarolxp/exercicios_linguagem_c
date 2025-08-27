#include <stdio.h>

int main() {
    int numApartamentos;
    float valorDiaria, valorPromocional, total100, total70, valorPerdido;

    printf("Digite o numero de apartamentos do hotel: ");
    scanf("%d", &numApartamentos);
    printf("Digite o valor da diaria por apartamento: ");
    scanf("%f", &valorDiaria);

    // Valor promocional da diária (25% de desconto)
    valorPromocional = valorDiaria * 0.75;

    // Valor total arrecadado com 100% de ocupação (sem promoção)
    total100 = numApartamentos * valorDiaria;

    // Valor total arrecadado com 100% de ocupação (com promoção)
    float totalComPromocao = numApartamentos * valorPromocional;

    // Valor total arrecadado com 70% de ocupação (com promoção)
    total70 = (numApartamentos * 0.70) * valorPromocional;

    // Valor que o hotel deixará de arrecadar (100% de ocupação)
    valorPerdido = total100 - totalComPromocao;

    printf("\nValor promocional da diaria: R$ %.2f\n", valorPromocional);
    printf("Valor total a ser arrecadado com 100%% de ocupacao: R$ %.2f\n", totalComPromocao);
    printf("Valor total a ser arrecadado com 70%% de ocupacao: R$ %.2f\n", total70);
    printf("Valor que o hotel deixara de arrecadar (100%% de ocupacao): R$ %.2f\n", valorPerdido);

    return 0;
}
