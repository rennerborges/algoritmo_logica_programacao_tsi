#include <stdio.h>
#include <string.h>

int main() {

    int x, soma;
    soma = 0;

    for(x = 2; x <= 10; x += 2){
        soma += x;
        printf("%d \n",x);
    }

    printf("Soma = %d", soma);

    return 0;
}