#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    if (num1 < num2) {
        printf("O menor numero e: %.2f\n", num1);
    } else {
        printf("O menor numero e: %.2f\n", num2);
    }

    return 0;
}
