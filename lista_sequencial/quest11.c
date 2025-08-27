#include <stdio.h>

int main() {
    float salario, impostoRenda;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    impostoRenda = salario * 0.05;
    printf("O valor do imposto de renda a ser pago e: %.2f\n", impostoRenda);
    return 0;
}
