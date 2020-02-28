// Página 26

#include <stdio.h>

int main() {
    float altura,base,area;

    printf("Informe a base: ");
    scanf("%f",&base);

    printf("Informe a altura: ");
    scanf("%f",&altura);

    area = (base*altura)/2;

    printf("A area do triangulo é: %.1f",area);

    return 0;
}