#include <stdio.h>

int main() {
    int n1, n2, n3, temp;
    printf("Digite tres numeros inteiros: (ex: 9 5 3) ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Logica de ordenacao simples
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 > n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    //saida
    printf("Valores em ordem crescente: %d, %d, %d\n", n1, n2, n3);

    return 0;
}
