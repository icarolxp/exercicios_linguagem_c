#include <stdio.h>

int main() {
    float salario_minimo, horas_trabalhadas, num_dependentes, horas_extras;
    float valor_hora, salario_mes, salario_bruto, irrf, salario_liquido, gratificacao, salario_a_receber;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o numero de dependentes: ");
    scanf("%f", &num_dependentes);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

    // Calculo do salario
    valor_hora = salario_minimo / 5.0;
    salario_mes = horas_trabalhadas * valor_hora;
    float valor_dependentes = num_dependentes * 32.0;
    float valor_horas_extras = horas_extras * (valor_hora * 1.5);
    salario_bruto = salario_mes + valor_dependentes + valor_horas_extras;

    // Calculo do IRRF
    if (salario_bruto < 200.0) {
        irrf = 0.0;
    } else if (salario_bruto <= 500.0) {
        irrf = salario_bruto * 0.10;
    } else {
        irrf = salario_bruto * 0.20;
    }

    salario_liquido = salario_bruto - irrf;

    // Calculo da gratificacao
    if (salario_liquido <= 350.0) {
        gratificacao = 100.0;
    } else {
        gratificacao = 50.0;
    }

    salario_a_receber = salario_liquido + gratificacao;

    printf("\nSalario a receber: R$ %.2f\n", salario_a_receber);

    return 0;
}
