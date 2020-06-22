#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Declarando as variaveis que serão utilizadas
    int num = 1, i = 10, soma = 0;
    // Criando o ciclo de repetição for

    // Lembrando que  i = 10 é a inicialização
    // i <= 40 é a condição (O ciclo vai repetir enquanto isso for verdadeiro)
    // i += 10 ou i = i + 10 é o incremento no final de cada ciclo é alterado adicionado + 10 na variavel

    for (i = 10 ; i <= 40 ; i += 10){
        soma += i;
    }
    printf("\n i: %d \n soma: %d \n", i, soma);
    return 0;
}