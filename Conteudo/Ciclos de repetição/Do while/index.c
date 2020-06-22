#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Declarando as variaveis que serão utilizadas
    int num = 1, i = 10, soma = 0;

    // Criando o ciclo de repetição 'do while'

    //!!!ATENÇÃO!!!
    // Nesse ciclo de repetição se a condição começar falsa ele vai executar apenas uma vez
    // Diferente dos outros que não executaria nem uma vez

    do{
        soma += i;

        // Aqui é necessario o incremento da variavel de controle no caso o 'i'
        // Sem ela o código entraria em um loop infinito
        i+= 10;

        // A condição do ciclo fica no final
    }while (i <= 40);

    printf("\n i: %d \n soma: %d \n", i, soma);
    return 0;
}