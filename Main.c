#include <stdio.h>
#include "Calculo.h"

int main() {
    int idade, quantidade;
    double preco_total;

    // Entrada de dados
    printf("Digite a idade do visitante: ");
    scanf("%d", &idade);

    printf("Digite a quantidade de bilhetes: ");
    scanf("%d", &quantidade);

    // Calcula o preço total
    preco_total = calcularIngresso(quantidade,idade);

    if (preco_total == -100)
    {
        printf("\nQuantidade ou idade inválidas!");
    }
    else
    {
        // Exibe o resultado
        printf("Preço total a pagar: R$ %.2f\n", preco_total);
    }

    return 0;
}
