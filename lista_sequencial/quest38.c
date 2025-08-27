#include <stdio.h>

int main() {
    int totalEleitores, votosCand1, votosCand2, votosNulos;
    float percCand1, percCand2, percNulos;

    printf("Digite o numero total de eleitores: ");
    scanf("%d", &totalEleitores);
    printf("Digite o numero de votos do primeiro candidato: ");
    scanf("%d", &votosCand1);
    printf("Digite o numero de votos do segundo candidato: ");
    scanf("%d", &votosCand2);

    votosNulos = totalEleitores - (votosCand1 + votosCand2);

    percCand1 = ((float)votosCand1 / totalEleitores) * 100.0;
    percCand2 = ((float)votosCand2 / totalEleitores) * 100.0;
    percNulos = ((float)votosNulos / totalEleitores) * 100.0;

    printf("\nPercentual de votos do primeiro candidato: %.2f%%\n", percCand1);
    printf("Percentual de votos do segundo candidato: %.2f%%\n", percCand2);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);

    return 0;
}
