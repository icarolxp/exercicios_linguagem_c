#include <stdio.h>

int main() {
    float custoEspetaculo, precoConvite;
    int convitesParaCusto, convitesParaLucro;

    printf("Digite o custo do espetaculo teatral: ");
    scanf("%f", &custoEspetaculo);
    printf("Digite o preco do convite: ");
    scanf("%f", &precoConvite);

    // Quantidade para cobrir o custo (arredondando para cima)
    convitesParaCusto = (int)(custoEspetaculo / precoConvite) + 1;

    // Quantidade para ter 23% de lucro
    convitesParaLucro = (int)((custoEspetaculo * 1.23) / precoConvite) + 1;

    printf("\nQuantidade de convites para alcancar o custo: %d\n", convitesParaCusto);
    printf("Quantidade de convites para ter 23%% de lucro: %d\n", convitesParaLucro);

    return 0;
}
