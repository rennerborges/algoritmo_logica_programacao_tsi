#include <stdio.h>

int main()
{

    // Aqui vamos declarar as variaveis que utilizaremos
    // Criaremos uma matriz 2x2 do tipo char o ultimo [] representa o tamanho dos char's

    int i, i2;
    char matriz[2][2][10];

    // Vamos agora percorrer a matriz, precisaremos de 2 ciclos de repetição.
    // Um para as linhas e o outro para as colunas

    // Lembre de ser sempre um numero a menos que o tamanho pois ele começa a contar do 0

    for (i = 0; i <= 1; i++)
    {
        for (i2 = 0; i2 <= 1; i2++)
        {
            printf("Informe um nome: ");
            scanf("%s", &matriz[i][i2]);
        }
    }

    // Agora vamos mostrar como ficou

    for (i = 0; i <= 1; i++)
    {
        for (i2 = 0; i2 <= 1; i2++)
        {
            printf("%s ",matriz[i][i2]);
        }
        printf("\n");
    }

    return 0;
}