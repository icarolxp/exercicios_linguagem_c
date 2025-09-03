#include <stdio.h>

int main() {
    //declaracao de variaveis
    float salario, novo_salario;
    //entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    //processamento de dados e saida
    if (salario <= 300.0) {
        novo_salario = salario * 1.50;
    } else {
        novo_salario = salario * 1.30;
    }

    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
