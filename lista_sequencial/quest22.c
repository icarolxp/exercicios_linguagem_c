#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("Valores originais: A=%d, B=%d, C=%d\n", a, b, c);

    // Troca de valores
    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("Valores apos a troca: A=%d, B=%d, C=%d\n", a, b, c);

    return 0;
}
