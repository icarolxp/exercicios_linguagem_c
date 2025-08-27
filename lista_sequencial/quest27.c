#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5.0;

    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);

    return 0;
}
