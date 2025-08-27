#include <stdio.h>

int main() {
    float valorProduto, novoValor;
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    novoValor = valorProduto * 0.91;
    printf("O novo valor com 9%% de desconto e: %.2f\n", novoValor);
    return 0;
}
