#include<stdio.h>

int main(void){
    // declaração de variáveis
    int x, y, divisao=0;
    //entrada de dados
    printf("Digite o primeiro valor\n");
    scanf("%d", &x);

    printf("Digite o segundo valor\n");
    scanf("%d", &y);
    //processamento
    divisao = x % y;
    //saída
    printf("O quociente e: %d\n", divisao);



    return 0;

}


