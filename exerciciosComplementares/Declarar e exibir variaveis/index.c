#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade = 0 , calcado = 0;
    char nome[30];

    printf("Informe seu nome:");
    gets(nome);

    printf("Informe a idade:");
    scanf("%d", &idade);

    printf("Informe a calçado:");
    scanf("%d", &calcado);

    printf("\n Nome: %s", nome);
    printf("\n A idade é: %d e o número do calçado é: %d \n\n", idade, calcado);
    return 0;
}