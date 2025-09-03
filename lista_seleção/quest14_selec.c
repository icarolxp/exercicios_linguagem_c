#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o codigo do cargo (1 a 5): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        printf("Cargo: Escriturario\n");
        printf("Percentual de aumento: 50.00%%\n");
    } else if (codigo == 2) {
        printf("Cargo: Secretario\n");
        printf("Percentual de aumento: 35.00%%\n");
    } else if (codigo == 3) {
        printf("Cargo: Caixa\n");
        printf("Percentual de aumento: 20.00%%\n");
    } else if (codigo == 4) {
        printf("Cargo: Gerente\n");
        printf("Percentual de aumento: 10.00%%\n");
    } else if (codigo == 5) {
        printf("Cargo: Diretor\n");
        printf("Nao tem aumento.\n");
    } else {
        printf("Codigo de cargo invalido.\n");
    }

    return 0;
}
