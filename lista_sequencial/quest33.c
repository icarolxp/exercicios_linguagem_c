#include <stdio.h>

int main() {
    float alturaDegrau, alturaDesejada;
    int numDegraus;

    printf("Digite a altura de um degrau em centimetros: ");
    scanf("%f", &alturaDegrau);
    printf("Digite a altura que deseja alcancar em metros: ");
    scanf("%f", &alturaDesejada);

    // Converta a altura do degrau de cm para metros
    float alturaDegrauMetros = alturaDegrau / 100.0;

    // Calcule o número de degraus usando as mesmas unidades (metros)
    numDegraus = (int)(alturaDesejada / alturaDegrauMetros + 0.5); // Arredonda para o inteiro mais próximo

    printf("Voce devera subir %d degraus para atingir seu objetivo.\n", numDegraus);

    return 0;
}
