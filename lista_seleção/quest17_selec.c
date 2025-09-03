#include <stdio.h>

int main() {
    int angulo;
    printf("Digite a medida do angulo em graus: ");
    scanf("%d", &angulo);

    if (angulo > 360) {
        angulo = angulo % 360;
    } else if (angulo < -360) {
        angulo = angulo % 360;
    }

    if (angulo > 0 && angulo <= 90) {
        printf("1º quadrante\n");
    } else if (angulo > 90 && angulo <= 180) {
        printf("2º quadrante\n");
    } else if (angulo > 180 && angulo <= 270) {
        printf("3º quadrante\n");
    } else if (angulo > 270 && angulo < 360) {
        printf("4º quadrante\n");
    } else if (angulo < 0 && angulo >= -90) {
        printf("1º quadrante\n");
    } else if (angulo < -90 && angulo >= -180) {
        printf("2º quadrante\n");
    } else if (angulo < -180 && angulo >= -270) {
        printf("3º quadrante\n");
    } else if (angulo < -270 && angulo >= -360) {
        printf("4º quadrante\n");
    } else if (angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 || angulo == 360) {
        printf("Sobre um dos eixos\n");
    } else {
        printf("Angulo invalido.\n");
    }

    return 0;
}
