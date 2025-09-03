#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b e c da equacao do 2o grau: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes sao reais e diferentes: x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A raiz e real e unica: x = %.2f\n", x1);
    } else {
        printf("A equacao nao possui raizes reais.\n");
    }

    return 0;
}
