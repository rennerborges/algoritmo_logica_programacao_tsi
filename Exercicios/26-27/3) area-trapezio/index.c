// Página 26

#include <stdio.h>

int main() {
    float base1,base2, altura, area;
    printf("Informe a base 1: ");
    scanf("%f",&base1);

    printf("Informe a base 2: ");
    scanf("%f",&base2);

    printf("Informe a altura: ");
    scanf("%f",&altura);

    area = ((base1+base2)*altura)/2;

    printf("A area do trapezio é: %.1f",area);
    return 0;
}
