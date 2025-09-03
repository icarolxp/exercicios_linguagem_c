#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite as tres notas do aluno: (ex: 10 6,0 7,0) ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("aprovado\n");
    } else if (media >= 5.0) {
        printf("exame\n");
    } else {
        printf("reprovado\n");
    }

    return 0;
}
