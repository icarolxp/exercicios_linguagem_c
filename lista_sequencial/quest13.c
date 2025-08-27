#include <stdio.h>

int main() {
    float salarioMinimo, quantQuilowatts, valorQuilowatt, valorTotal, valorComDesconto;
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite a quantidade de quilowatts gasta: ");
    scanf("%f", &quantQuilowatts);

    // Valor de cada kilowatt
    valorQuilowatt = salarioMinimo / 5.0;

    // Valor total a ser pago
    valorTotal = valorQuilowatt * quantQuilowatts;

    // Novo valor com desconto de 15%
    valorComDesconto = valorTotal * 0.85;

    printf("\nValor de cada kilowatt: R$ %.2f\n", valorQuilowatt);
    printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
    printf("Valor com desconto de 15%%: R$ %.2f\n", valorComDesconto);

    return 0;
}
