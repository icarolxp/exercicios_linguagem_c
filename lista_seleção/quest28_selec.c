#include <stdio.h>

int main() {
    int l1, l2, l3;
    printf("Digite o valor dos tres lados do triangulo: ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
        printf("Os lados formam um triangulo.\n");
        if (l1 == l2 && l2 == l3) {
            printf("Tipo: Equilatero\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("Tipo: Isosceles\n");
        } else {
            printf("Tipo: Escaleno\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
