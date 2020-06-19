#include <stdio.h>

int main() {

    // Descobrindo tamanho do array

    int a[] = { 3, 5 };

    int tam = sizeof(a)/sizeof(a[0]);

    printf("%d", tam);

    return 0;
}