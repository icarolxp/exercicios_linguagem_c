#include <stdio.h>

int main() {
    int pesoKg;
    float pesoGramas, novoPesoGramas;
    printf("Digite o peso em kg (valor inteiro): ");
    scanf("%d", &pesoKg);

    // Peso em gramas
    pesoGramas = pesoKg * 1000.0;

    // Novo peso em gramas com aumento de 5%
    novoPesoGramas = pesoGramas * 1.05;

    printf("O peso em gramas e: %.2f\n", pesoGramas);
    printf("O novo peso em gramas (engordando 5%%) e: %.2f\n", novoPesoGramas);

    return 0;
}
