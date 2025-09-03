#include <stdio.h>

int main() {
    float preco, valor_final;
    int codigo;
    printf("Digite o preco normal do produto: ");
    scanf("%f", &preco);
    printf("Digite o codigo da condicao de pagamento (1 a 4): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        valor_final = preco * 0.90; // 10% de desconto
        printf("Valor a vista em dinheiro ou cheque: R$ %.2f\n", valor_final);
    } else if (codigo == 2) {
        valor_final = preco * 0.95; // 5% de desconto
        printf("Valor a vista no cartao de credito: R$ %.2f\n", valor_final);
    } else if (codigo == 3) {
        valor_final = preco;
        printf("Valor em 2 vezes (sem juros): 2x de R$ %.2f\n", valor_final / 2.0);
    } else if (codigo == 4) {
        valor_final = preco * 1.10; // 10% de juros
        printf("Valor em 3 vezes (com juros): 3x de R$ %.2f\n", valor_final / 3.0);
    } else {
        printf("Codigo de pagamento invalido.\n");
    }

    return 0;
}
