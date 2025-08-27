#include <stdio.h>

int main() {
    float precoCusto, percentualAcrecimo, precoVenda;
    printf("Digite o preco de custo do produto: ");
    scanf("%f", &precoCusto);
    printf("Digite o percentual de acrescimo (ex: 20 para 20%%): ");
    scanf("%f", &percentualAcrecimo);

    precoVenda = precoCusto * (1 + (percentualAcrecimo / 100.0));

    printf("O valor de venda e: R$ %.2f\n", precoVenda);

    return 0;
}
