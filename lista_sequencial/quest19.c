#include <stdio.h>

int main() {
    int num1, num2, num3, somatorio;
    float media;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    somatorio = num1 + num2 + num3;
    media = (float)somatorio / 3;

    printf("Media: %.2f\n", media);
    printf("Somatorio: %d\n", somatorio);
    printf("Resto da divisao do somatorio por cada valor:\n");
    printf("Somatorio %% %d = %d\n", num1, somatorio % num1);
    printf("Somatorio %% %d = %d\n", num2, somatorio % num2);
    printf("Somatorio %% %d = %d\n", num3, somatorio % num3);

    return 0;
}
