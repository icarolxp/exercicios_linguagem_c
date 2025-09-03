#include <stdio.h>

int main() {
    float preco;
    int codigo;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o codigo de origem: ");
    scanf("%d", &codigo);

    printf("Preco: %.2f\n", preco);
    printf("Procedencia: ");

    if (codigo == 1) {
        printf("Sul\n");
    } else if (codigo == 2) {
        printf("Norte\n");
    } else if (codigo == 3) {
        printf("Leste\n");
    } else if (codigo == 4) {
        printf("Oeste\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Nordeste\n");
    } else if (codigo >= 7 && codigo <= 9) {
        printf("Sudeste\n");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Centro-Oeste\n");
    } else if (codigo >= 21 && codigo <= 30) {
        printf("Nordeste\n");
    } else {
        printf("Codigo de origem invalido.\n");
    }

    return 0;
}
