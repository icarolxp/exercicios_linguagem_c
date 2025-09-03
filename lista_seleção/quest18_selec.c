#include <stdio.h>

int main() {
    int horas_extras_min, horas_falta_min, h;
    int premio;

    printf("Digite o numero de horas extras (em minutos): ");
    scanf("%d", &horas_extras_min);
    printf("Digite o numero de horas-falta (em minutos): ");
    scanf("%d", &horas_falta_min);

    h = horas_extras_min - (2 * horas_falta_min) / 3;

    if (h > 2400) {
        premio = 500;
    } else if (h >= 1800) {
        premio = 400;
    } else if (h >= 1200) {
        premio = 300;
    } else if (h >= 600) {
        premio = 200;
    } else {
        premio = 100;
    }

    printf("\nHoras extras (em horas): %.2f\n", (float)horas_extras_min / 60);
    printf("Horas-falta (em horas): %.2f\n", (float)horas_falta_min / 60);
    printf("Valor do premio: R$ %d\n", premio);

    return 0;
}
