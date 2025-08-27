#include <stdio.h>

int main() {
    float comprimento, largura, profundidade, volume, custo;
    const float PRECO_M3 = 45.00;

    printf("Digite o comprimento da piscina: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da piscina: ");
    scanf("%f", &largura);
    printf("Digite a profundidade da piscina: ");
    scanf("%f", &profundidade);

    volume = comprimento * largura * profundidade;
    custo = volume * PRECO_M3;

    printf("O valor total da construcao e: R$ %.2f\n", custo);

    return 0;
}
