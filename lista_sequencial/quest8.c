#include <stdio.h>

int main() {
    float salarioFuncionario, salarioMinimo, salariosMinimos;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salarioFuncionario);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    salariosMinimos = salarioFuncionario / salarioMinimo;
    printf("\nO funcionario ganha %.2f salarios minimos.\n", salariosMinimos);
    return 0;
}
