// Página 26

#include <stdio.h>

int main() {
    char produto[30];
    float valorUnitario, desconto, valorFinal, valorDesconto;

    printf("Informe o nome do produto: ");
    gets(produto);

    printf("Informe o valor unitario: ");
    scanf("%f",&valorUnitario);

    printf("Informe a porcentagem de desconto: ");
    scanf("%f",&desconto);

    valorDesconto = valorUnitario*desconto/100;
    valorFinal = valorUnitario-valorDesconto;

    printf("Produto: %s \n", produto);
    printf("Preco: %.2f \n", valorUnitario);
    printf("Tava de desconto: %.2f \n", desconto);
    printf("================ \n");
    printf("Desconto: %.2f \n", valorDesconto);
    printf("Valor do produto com desconto: %.2f \n", valorFinal);

    return 0;
}