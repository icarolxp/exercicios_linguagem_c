#include <stdio.h>

int main() {
    char pergunta1, pergunta2, pergunta3;
    //entrada de dados
    printf("O animal e mamifero? (s/n): ");
    scanf(" %c", &pergunta1);
    //processamento e saida
    if (pergunta1 == 's') {
        printf("O animal e quadrupede? (s/n): ");//entrada de respostas e etc
        scanf(" %c", &pergunta2);
        if (pergunta2 == 's') {
            printf("O animal e carnivoro? (s/n): ");//entrada de respostas e etc
            scanf(" %c", &pergunta3);
            if (pergunta3 == 's') {
                printf("O animal escolhido foi o Leao.\n");
            } else {
                printf("O animal e herbivoro? (s/n): ");//entrada de respostas e etc
                scanf(" %c", &pergunta3);
                if (pergunta3 == 's') {
                    printf("O animal escolhido foi o Cavalo.\n");
                }
            }
        } else {
            printf("O animal e bipede? (s/n): ");
            scanf(" %c", &pergunta2);
            if (pergunta2 == 's') {
                printf("O animal e onivoro? (s/n): ");
                scanf(" %c", &pergunta3);
                if (pergunta3 == 's') {
                    printf("O animal escolhido foi o Homem.\n");
                } else {
                    printf("O animal e frutifero? (s/n): ");
                    scanf(" %c", &pergunta3);
                    if (pergunta3 == 's') {
                        printf("O animal escolhido foi o Macaco.\n");
                    }
                }
            } else {
                printf("O animal e voador? (s/n): ");
                scanf(" %c", &pergunta2);
                if (pergunta2 == 's') {
                    printf("O animal escolhido foi o Morcego.\n");
                } else {
                    printf("O animal e aquatico? (s/n): ");
                    scanf(" %c", &pergunta2);
                    if (pergunta2 == 's') {
                        printf("O animal escolhido foi a Baleia.\n");
                    }
                }
            }
        }
    } else { // Não é mamífero
        printf("O animal e uma ave? (s/n): ");
        scanf(" %c", &pergunta1);
        if (pergunta1 == 's') {
            printf("O animal e voador? (s/n): ");
            scanf(" %c", &pergunta2);
            if (pergunta2 == 's') {
                printf("O animal e de rapina? (s/n): ");
                scanf(" %c", &pergunta3);
                if (pergunta3 == 's') {
                    printf("O animal escolhido foi a Aguia.\n");
                } else {
                    printf("O animal e nadador? (s/n): ");
                    scanf(" %c", &pergunta3);
                    if (pergunta3 == 's') {
                        printf("O animal escolhido foi o Pato.\n");
                    }
                }
            } else {
                printf("O animal e tropical? (s/n): ");
                scanf(" %c", &pergunta2);
                if (pergunta2 == 's') {
                    printf("O animal escolhido foi o Avestruz.\n");
                } else {
                    printf("O animal e polar? (s/n): ");
                    scanf(" %c", &pergunta2);
                    if (pergunta2 == 's') {
                        printf("O animal escolhido foi o Pinguim.\n");
                    }
                }
            }
        } else { // É um réptil
            printf("O animal tem casco? (s/n): ");
            scanf(" %c", &pergunta2);
            if (pergunta2 == 's') {
                printf("O animal escolhido foi a Tartaruga.\n");
            } else {
                printf("O animal e carnivoro? (s/n): ");
                scanf(" %c", &pergunta2);
                if (pergunta2 == 's') {
                    printf("O animal escolhido foi o Crocodilo.\n");
                } else {
                    printf("O animal nao tem patas? (s/n): ");
                    scanf(" %c", &pergunta2);
                    if (pergunta2 == 's') {
                        printf("O animal escolhido foi a Cobra.\n");
                    }
                }
            }
        }
    }
    return 0;
}
