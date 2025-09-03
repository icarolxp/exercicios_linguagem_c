#include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 2) {
        printf("Classificacao: Recem-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        printf("Classificacao: crianca\n");
    } else if (idade >= 12 && idade <= 19) {
        printf("Classificacao: adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        printf("Classificacao: adulto\n");
    } else {
        printf("Classificacao: idoso\n");
    }

    return 0;
}
