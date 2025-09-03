#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = num1 + num2;
        printf("Resultado da adicao: %.2f\n", resultado);
    } else if (operacao == '-') {
        resultado = num1 - num2;
        printf("Resultado da subtracao: %.2f\n", resultado);
    } else if (operacao == '*') {
        resultado = num1 * num2;
        printf("Resultado da multiplicacao: %.2f\n", resultado);
    } else if (operacao == '/') {
        if (num2 != 0) {
            resultado = (float)num1 / num2;
            printf("Resultado da divisao: %.2f\n", resultado);
        } else {
            printf("Erro: Divisao por zero.\n");
        }
    } else {
        printf("Operacao invalida.\n");
    }

    return 0;
}
