#include <stdio.h>

int main() {
    char nome1[50], nome2[50], nome3[50];
    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", nome2);
    printf("Digite o terceiro nome: ");
    scanf("%s", nome3);

    printf("Nomes impressos:\n");
    printf("%s %s\n", nome1, nome3);
    printf("%s\n", nome2);

    return 0;
}
