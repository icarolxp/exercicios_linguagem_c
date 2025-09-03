#include <stdio.h>

int main() {
    int idade;
    char risco;
    int codigo_seguro;

    printf("Digite a idade do segurado (18 a 70): ");
    scanf("%d", &idade);
    printf("Digite o grupo de risco (b, m ou a): ");
    scanf(" %c", &risco);

    if (idade >= 18 && idade <= 70) {
        if (idade >= 18 && idade <= 24) {
            if (risco == 'b') {
                codigo_seguro = 7;
            } else if (risco == 'm') {
                codigo_seguro = 8;
            } else if (risco == 'a') {
                codigo_seguro = 9;
            }
        } else if (idade >= 25 && idade <= 40) {
            if (risco == 'b') {
                codigo_seguro = 4;
            } else if (risco == 'm') {
                codigo_seguro = 5;
            } else if (risco == 'a') {
                codigo_seguro = 6;
            }
        } else if (idade >= 41 && idade <= 70) {
            if (risco == 'b') {
                codigo_seguro = 1;
            } else if (risco == 'm') {
                codigo_seguro = 2;
            } else if (risco == 'a') {
                codigo_seguro = 3;
            }
        }
        printf("Codigo do seguro: %d\n", codigo_seguro);
    } else {
        printf("Idade fora da faixa de seguro.\n");
    }

    return 0;
}
