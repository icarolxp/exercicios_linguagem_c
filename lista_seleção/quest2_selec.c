#include <stdio.h>

int main() {
    //declaracao de variaveis
    float salario, novo_salario;
    //entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    //processamento de dados e saida
    if (salario < 500.0) {//estrutura de selecao para decidir se precisa de reajuste salarial
        novo_salario = salario * 1.30;
        printf("Salario reajustado: R$ %.2f\n", novo_salario);
    } else {//caso na precise essa e a mensagem
        printf("O funcionario nao tem direito ao aumento.\n");
    }

    return 0;
}
