#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    printf("Digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printf("Numeros divisiveis por 2 e 3:\n");

    if (num1 % 2 == 0 && num1 % 3 == 0) {
        printf("%d\n", num1);
    }
    if (num2 % 2 == 0 && num2 % 3 == 0) {
        printf("%d\n", num2);
    }
    if (num3 % 2 == 0 && num3 % 3 == 0) {
        printf("%d\n", num3);
    }
    if (num4 % 2 == 0 && num4 % 3 == 0) {
        printf("%d\n", num4);
    }

    return 0;
}
