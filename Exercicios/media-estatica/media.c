#include <stdio.h>
int main() {

    float media,nota1,nota2;

    printf("Informe a nota 1:");
    scanf("%f",&nota1);

    printf("Informe a nota 2:");
    scanf("%f",&nota2);

    media = (nota1+nota2)/2;

    printf("A media das notas é %f",media);

    return 0;
}