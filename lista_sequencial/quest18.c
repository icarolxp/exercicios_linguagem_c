
#include <stdio.h>

int main() {
    float largura, comprimento, area;
    printf("Digite a largura do lote de terra: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do lote de terra: ");
    scanf("%f", &comprimento);
    area = largura * comprimento;
    printf("A area total do lote e: %.2f\n", area);
    return 0;
}
