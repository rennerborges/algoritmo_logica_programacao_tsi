#include <stdio.h>
#include <string.h>

float calcularPesoMasculino(float h){
    return (72.6 * h) - 58;
}

float calcularPesoFeminino(float h){
    return (62.1 * h) - 44.7;
}


int main() {
    int op;
    float h;
    do{
        printf("\n");

        printf("1- Calcular o peso ideal masculino \n");
        printf("2- Calcular o peso ideal fenino \n");
        printf("3- Sair \n");
        printf("Escolha a opção: \n");
        scanf("%d", &op);

        if(op != 3){
            printf("Informe a altura em metros:");
            scanf("%f", &h);

            printf("\n");

        }

        switch (op){
        case 1:
            printf("======== PESO IDEAL MASCULINO ========\n\n");
            printf("O peso ideal masculino para a altura %.2fm é %.2fkg \n", h, calcularPesoMasculino(h));
            break;

        case 2:
            printf("======== PESO IDEAL FEMININO ========\n\n");
            printf("O peso ideal feminino para a altura %.2fm é %.2fkg \n", h, calcularPesoFeminino(h));
            break;
        default:
            printf("\nAté mais amigo! \n");
        }

    } while (op != 3);


    return 0;
}