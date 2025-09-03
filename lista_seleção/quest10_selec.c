#include <stdio.h>

int main()
    //declaracao de variaveis
    int numero;
    //entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    //processamento e saida
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}
