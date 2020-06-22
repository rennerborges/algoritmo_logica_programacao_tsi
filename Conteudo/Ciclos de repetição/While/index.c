#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Declarando as variaveis que serão utilizadas
    int num = 1, i = 10, soma = 0;

    // Criando o ciclo de repetição while
    // i <= 40 é a condição (O ciclo vai repetir enquanto isso for verdadeiro)

    while (i <= 40){
        soma += i;

        // Aqui é necessario o incremento da variavel de controle no caso o 'i'
        // Sem ela o código entraria em um loop infinito
        i+= 10;
    }
    printf("\n i: %d \n soma: %d \n", i, soma);
    return 0;
}