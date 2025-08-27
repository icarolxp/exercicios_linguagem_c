/*4) Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas
notas.*/
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    // declaração de variáveis
    float n1, n2, n3, media_aritm;

    //usabilidade
    printf("Digite as notas para calcular a média.\n\n");
    printf("ATENÇÃO: Use vírgula, e não ponto, para decimais (Exemplo: 9,5 e não 9.5).\n\n");

    //entrada de dados
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);

    //processamento
    media_aritm = (n1 + n2 + n3) / 3;
    //saída
    printf("A média aritimética é: %.2f\n", media_aritm);



    return 0;

}


