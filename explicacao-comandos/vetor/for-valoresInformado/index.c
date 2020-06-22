#include <stdio.h>

int main() {

    // Usando for para percorrer um valor estatico ou seja pré-definido

    int a[] = {}, tamanho, i = 0;

    // Aqui será informado o tamanho que o array terá

    printf("Informe o tamanho do array:");
    scanf("%d", &tamanho);

    // Aqui estou salvando o valor do array em cada posição levando em conta o tamanho pre-definido

    // Lembre-se que deve usar o < (menor) e não o <= (menor ou igual) pois o array começa em 0

    for (i = 0; i < tamanho; i++){
        printf("Informe um valor inteiro:");
        scanf("%d",&a[i]);
    }

    //Aqui estou mostrando os valores que foram definidos acima levando em conta o tamanho pre-definido

    // Lembre-se que deve usar o < (menor) e não o <= (menor ou igual) pois o array começa em 0


    for (i = 0; i < tamanho; i++){
        printf("vetor a[%d] = %d \n", i, a[i]);
    }

    return 0;
}