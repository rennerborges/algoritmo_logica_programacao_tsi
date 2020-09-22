#include <stdio.h>
#include <string.h>

int main() {

    int x, soma;
    x = 2;
    soma = 0;

    while(x <= 10){
        soma += x;
        printf("%d \n",x);
        x+= 2;
    }

    printf("Soma = %d", soma);

    return 0;
}