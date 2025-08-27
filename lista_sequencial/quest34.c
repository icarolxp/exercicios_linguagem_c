#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O seu Indice de Massa Corporea (IMC) e: %.2f\n", imc);

    return 0;
}
