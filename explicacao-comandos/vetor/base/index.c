#include <stdio.h>

int main() {

    // Declarar inteiros abertos

    int a[] = { 3, 5 };

    //Declarar com tamanho fixo

    int b[3] = {};

    // Declarar com tamanho fixo e cheio

    int c[3] = {1,2,3};

    // Declarar char
    char nomes[][6] = {"nome", "renner"};

    printf("Declarar inteiros abertos: %d \n", a[0]);
    printf("Declarar com tamanho fixo: %d \n", b[0]);
    printf("Declarar com tamanho fixo e cheio: %d \n", c[0]);
    printf("Declarar char: %s \n", nomes[0]);


    return 0;
}