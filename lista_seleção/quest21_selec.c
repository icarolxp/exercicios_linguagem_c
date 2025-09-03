#include <stdio.h>

int main() {
    char frase[200];
    int i = 0, vogais = 0;

    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);

    while (frase[i] != '\0') {
        if (frase[i] == 'a' || frase[i] == 'A' ||
            frase[i] == 'e' || frase[i] == 'E' ||
            frase[i] == 'i' || frase[i] == 'I' ||
            frase[i] == 'o' || frase[i] == 'O' ||
            frase[i] == 'u' || frase[i] == 'U') {
            vogais++;
        }
        i++;
    }

    printf("Numero de vogais: %d\n", vogais);
    return 0;
}
