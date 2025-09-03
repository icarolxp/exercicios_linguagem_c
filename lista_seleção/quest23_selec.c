#include <stdio.h>

int main() {
    char frase[200];
    int i = 0, cont = 0;

    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);

    while (frase[i] != '\0') {
        if ((frase[i] == 'a' || frase[i] == 'A') &&
            (frase[i+1] == 'u' || frase[i+1] == 'U') &&
            (frase[i+2] == 'l' || frase[i+2] == 'L') &&
            (frase[i+3] == 'a' || frase[i+3] == 'A')) {
            cont++;
        }
        i++;
    }

    printf("Quantidade de vezes que aparece 'aula': %d\n", cont);
    return 0;
}
