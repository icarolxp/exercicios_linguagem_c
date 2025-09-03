#include <stdio.h>

int main() {
    //declaracao de variaveis
    int idade;
    //entrada de dados
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    //processamento e saida
    if (idade >= 18) {
        printf("Maior de idade.\n");
    } else {
        printf("Nao e maior de idade.\n");
    }

    return 0;
}
