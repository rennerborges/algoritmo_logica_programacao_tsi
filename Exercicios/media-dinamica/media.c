#include <stdio.h>

int main(){
    float nota1,nota2,media;

    do{
        printf("Informe a nota 1: ");
        scanf("%f",&nota1);

        printf("Informe a nota 2: ");
        scanf("%f",&nota2);

        media = (nota1+nota2)/2;
        printf("A media é %.1f \n",media);
    }while(nota1 != 9999);

}