#include <stdio.h>

int main() {

    // Usando for para percorrer um valor estatico ou seja pré-definido

    int a[5] = {}, i = 0;

    // Aqui estou salvando o valor do array em cada posição
    for (i = 0; i < 5; i++){
        printf("Informe um valor inteiro:");
        scanf("%d",&a[i]);
    }

    //Aqui estou mostrando os valores que foram definidos acima
    for (i = 0; i < 5; i++){
        printf("vetor a[%d] = %d \n", i, a[i]);
    }

    return 0;
}