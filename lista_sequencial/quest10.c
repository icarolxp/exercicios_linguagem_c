
#include <stdio.h>


int main() {
    float diagonal, area;
    printf("Digite o valor da diagonal do quadrado: ");
    scanf("%f", &diagonal);
    area = (diagonal * diagonal) / 2.0;
    printf("A area do quadrado e: %.2f\n", area);
    return 0;
}
