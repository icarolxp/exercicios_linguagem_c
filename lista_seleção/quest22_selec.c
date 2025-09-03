#include <stdio.h>

int main() {
    char frase[200];
    int i = 0, palavras = 0;

    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);

    // Conta palavra ao encontrar um espaço após caracteres válidos
    while (frase[i] != '\0') {
        if ((frase[i] != ' ' && frase[i] != '\n' && frase[i] != '\t') &&
            (frase[i+1] == ' ' || frase[i+1] == '\n' || frase[i+1] == '\t' || frase[i+1] == '\0')) {
            palavras++;
        }
        i++;
    }

    printf("Numero de palavras: %d\n", palavras);
    return 0;
}
