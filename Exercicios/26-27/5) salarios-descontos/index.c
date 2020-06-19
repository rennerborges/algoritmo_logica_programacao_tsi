// Página 26

#include <stdio.h>

int main() {
    char nome[30];
    int numeroFilhos;
    float salarioBruto, salarioFamilia, descontoInss,descontoPS, salarioLiquido;

    printf("Informe o nome do funcionario:");
    gets(nome);

    printf("Informe o numero de filhos: ");
    scanf("%d",&numeroFilhos);

    printf("Informe o salario Bruto: ");
    scanf("%f",&salarioBruto);

    printf("Informe o salario da familia: ");
    scanf("%f",&salarioFamilia);

    descontoInss = salarioBruto*0.10;
    descontoPS = salarioBruto*0.05;
    salarioFamilia = salarioFamilia*numeroFilhos;
    salarioLiquido = salarioBruto - descontoPS - descontoInss + salarioFamilia;

    printf("Funcionario: %s \n", nome);
    printf("Salario Bruto: %f \n", salarioBruto);
    printf("Quantidade de filhos : %d \n", numeroFilhos);
    printf("================================== \n");
    printf("Desconto INSS :  R$: %.2f \n", descontoInss);
    printf("Desconto Plano de saude: R$: %.2f \n", descontoPS);
    printf("================================== \n");
    printf("Total desconto: R$: %.2f \n", descontoPS+descontoInss);
    printf("================================== \n");
    printf("Salario Familia R$: %.2f \n", salarioFamilia);
    printf("================================== \n");
    printf("Salario Liquido: R$: %.2f \n", salarioLiquido);
    return 0;
}