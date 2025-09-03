/* 1) Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
reprovado para média inferior a 7.0.*/
#include <stdio.h>

int main() {
    //declaração de variaveis
    float n1, n2, n3, n4, media;

    //entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    //saida e processamento de dados
    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
