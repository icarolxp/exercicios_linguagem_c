#include <stdio.h>

int main() {
    //declaracao de variaveis
    float lab, av_semestral, exame_final, media_final;
    //entrada de dados
    printf("Digite a nota do trabalho de laboratorio (0 a 10): ");
    scanf("%f", &lab);
    printf("Digite a nota da avaliacao semestral (0 a 10): ");
    scanf("%f", &av_semestral);
    printf("Digite a nota do exame final (0 a 10): ");
    scanf("%f", &exame_final);

    //processamento e saida
    media_final = (lab * 2 + av_semestral * 3 + exame_final * 5) / (2 + 3 + 5);

    printf("Media final: %.2f\n", media_final);
    //estrutura de selecao
    if (media_final >= 8.0) {
        printf("Conceito: A\n");
    } else if (media_final >= 7.0) {
        printf("Conceito: B\n");
    } else if (media_final >= 6.0) {
        printf("Conceito: C\n");
    } else if (media_final >= 5.0) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }

    return 0;
}
