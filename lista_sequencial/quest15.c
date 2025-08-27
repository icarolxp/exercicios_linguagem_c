#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idadeAnos, idadeSemanas;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    // Idade em anos
    idadeAnos = anoAtual - anoNascimento;

    // Idade em semanas (assumindo 52 semanas por ano)
    idadeSemanas = idadeAnos * 52;

    printf("A idade da pessoa e: %d anos\n", idadeAnos);
    printf("Essa idade convertida em semanas e: %d semanas\n", idadeSemanas);

    return 0;
}
