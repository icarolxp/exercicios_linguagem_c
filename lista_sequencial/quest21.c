#include <stdio.h>

int main() {
    float prod1, prod2, prod3, prod4, prod5, total, pagamento, troco;
    printf("Digite o valor do produto 1: ");
    scanf("%f", &prod1);
    printf("Digite o valor do produto 2: ");
    scanf("%f", &prod2);
    printf("Digite o valor do produto 3: ");
    scanf("%f", &prod3);
    printf("Digite o valor do produto 4: ");
    scanf("%f", &prod4);
    printf("Digite o valor do produto 5: ");
    scanf("%f", &prod5);

    total = prod1 + prod2 + prod3 + prod4 + prod5;

    printf("Total da compra: R$ %.2f\n", total);
    printf("Digite o valor do pagamento: ");
    scanf("%f", &pagamento);

    troco = pagamento - total;

    printf("O troco a ser devolvido e: R$ %.2f\n", troco);

    return 0;
}
