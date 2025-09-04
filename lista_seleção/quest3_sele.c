#include <stdio.h>

int main() {
    // Declaração de variáveis
    char senha[6];

    // Entrada de dados
    printf("Digite a senha (ASDFG): ");
    scanf("%s", senha);

    // Compara cada caractere individualmente
    if (senha[0] == 'A' && senha[1] == 'S' && senha[2] == 'D' && senha[3] == 'F' && senha[4] == 'G' && senha[5] == '\0') {
        printf("Permissao concedida.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}
