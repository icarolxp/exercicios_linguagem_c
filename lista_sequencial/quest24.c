#include <stdio.h>
#include <math.h>

int main() {
    float aplicacaoMensal, taxa, valorAcumulado;
    int numeroMeses;

    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &aplicacaoMensal);
    printf("Digite a taxa de juros (i, ex: 0.01 para 1%%): ");
    scanf("%f", &taxa);
    printf("Digite o numero de meses (n): ");
    scanf("%d", &numeroMeses);

    valorAcumulado = (aplicacaoMensal * pow(1 + taxa, numeroMeses) - 1) / taxa;

    printf("O valor acumulado na poupanca e: R$ %.2f\n", valorAcumulado);

    return 0;
}
