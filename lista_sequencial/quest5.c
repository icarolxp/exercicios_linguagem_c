#include <stdio.h>

int main() {
    float nota1, peso1, nota2, peso2, mediaPonderada;
    printf("Digite a primeira nota: \n ");
    scanf("%f %f", &nota1, &peso1);
    printf("Digite a segunda nota e seu peso: ");
    scanf("%f %f", &nota2, &peso2);
    mediaPonderada = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);
    printf("A media ponderada das notas e: %.2f\n", mediaPonderada);
    return 0;
}
