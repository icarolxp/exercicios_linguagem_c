#include <stdio.h>
#include <string.h>

int main() {
    //declaracao de variaveis
    char senha[6];
    char senha_correta[] = "ASDFG";
    //entrada de dados
    printf("Digite a senha: ");
    scanf("%s", senha);
    //processamento e saida
    if (strcmp(senha, senha_correta) == 0) {
        printf("Permissao concedida.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}
