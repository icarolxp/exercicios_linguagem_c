#include <stdio.h>

int main() {
    int quantidade1, quantidade2, quantidade3;
    float valor1, valor2, valor3, total;

    printf("Digite a quantidade do primeiro produto: ");
    scanf("%d", &quantidade1);
    printf("Digite o valor do primeiro produto(ex: 15,99): ");
    scanf("%f", &valor1);
    printf("Digite a quantidade do segundo produto: ");
    scanf("%d", &quantidade2);
    printf("Digite o valor do segundo produto (ex: 15,99): ");
    scanf("%f", &valor2);
    printf("Digite a quantidade do terceiro produto: ");
    scanf("%d", &quantidade3);
    printf("Digite o valor do terceiro produto (ex: 15,99): ");
    scanf("%f", &valor3);

    total = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);

    printf("\nO valor total e: %.2f\n", total);

    return 0;
}
