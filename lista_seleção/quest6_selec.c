#include <stdio.h>

int main() {
    //declaracao de variaveis
    float altura, peso_ideal;
    char sexo;
    //entrada de dados
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    //processamento e saida
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("Peso ideal para homens: %.2f kg\n", peso_ideal);
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Peso ideal para mulheres: %.2f kg\n", peso_ideal);
    } else {
        printf("Sexo invalido.\n");
    }

    return 0;
}
