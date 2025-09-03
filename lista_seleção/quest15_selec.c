#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Menu de opcoes:\n");
    printf("1 - Soma\n");
    printf("2 - Raiz quadrada\n");
    printf("3 - Finalizar\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite dois numeros para a soma:(ex: 10 8 ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 2) {
        printf("Digite um numero para a raiz quadrada: ");
        scanf("%f", &num1);
        resultado = sqrt(num1);
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 3) {
        printf("Programa finalizado.\n");
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
