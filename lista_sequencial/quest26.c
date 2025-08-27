#include <stdio.h>

int main() {
    float a, b, c, d, e, f, x, y;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    printf("Digite o coeficiente d: ");
    scanf("%f", &d);

    printf("Digite o coeficiente e: ");
    scanf("%f", &e);

    printf("Digite o coeficiente f: ");
    scanf("%f", &f);

    y = (a * f - c * d) / (a * e - b * d);
    x = (c * e - b * f) / (a * e - b * d);

    printf("O valor de x e: %.2f\n", x);
    printf("O valor de y e: %.2f\n", y);

    return 0;
}
