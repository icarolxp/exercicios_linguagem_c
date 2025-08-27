#include <stdio.h>
#include <math.h>

int main() {
    float base, expoente, resultado;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite o expoente: ");
    scanf("%f", &expoente);
    resultado = pow(base, expoente);
    printf("%.2f ^ %.2f igual a: %.2f\n", base, expoente, resultado);
    return 0;
}
