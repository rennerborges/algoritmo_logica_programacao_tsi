// Página 26

#include <stdio.h>
#include <math.h>

int main() {
    int periodoMes;
    float capitalAplicado, taxaAplicacao, juroComposto,montante;

    printf("Informe o capital aplicado: ");
    scanf("%f",&capitalAplicado);

    printf("Informe a taxa de aplicacao: ");
    scanf("%f",&taxaAplicacao);

    printf("Informe o periodo em mês: ");
    scanf("%d",&periodoMes);

    montante =  capitalAplicado * (pow((1+taxaAplicacao/100),periodoMes));
    juroComposto = montante - capitalAplicado;
    printf("O montante é: R$: %.2f \n", montante);
    printf("O juro composto é: R$: %.2f \n", juroComposto);

    return 0;
}