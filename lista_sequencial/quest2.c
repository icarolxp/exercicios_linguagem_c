#include <stdio.h>

int main() {
    float num1, num2, subtracao;
    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);
    subtracao = num1 - num2;
    printf("A subtracao do primeiro pelo segundo numero e: %.2f\n", subtracao);
    return 0;
}
