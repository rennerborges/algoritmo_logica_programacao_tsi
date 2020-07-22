#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
    // Aqui vamos declarar as variaveis
    // Ficando atento que o FILE é utilizado para se referenciar a um arquivo
    // O * representa um ponteiro que a grosso modo faz referencia a um espaço fisico da memoria

    FILE *arquivo;
    char texto[100];

    // Vamos abrir/criar o arquivo, sempre lembrando que o 'r' serve apenas para leitura dos arquivos

    // O fopen é uma função que serve para criar ou abrir um arquivo

    arquivo = fopen("teste.txt", "r");

    // Vamos verificar se deu certo o processo de criar o arquivo
    if (arquivo == NULL)
    {
        // Ignorem o ANSI_COLOR_RED e derivados, estão aí por valor estetico

        printf(ANSI_COLOR_RED "\nNão foi possivel ler o arquivo! \n");
        printf(ANSI_COLOR_YELLOW "Crie um arquivo chamado teste.txt para conseguir testar.\n" ANSI_COLOR_RESET);
        exit(1);
    }

    // Se chegou aqui é porque está tudo dentro dos conformes

    // Vamos ler o arquivo com a função fgets()

    // Esse while vai passar por cada linha, até ser NULL ou seja chegar ao final

    while (fgets(texto, sizeof(texto), arquivo) != NULL)
    {

        // Lembrando que a variavel texto vai ser alterada a cada ciclo

        printf("%s", texto);
    }

    // Aqui vamos fechar o arquivo que acabamos de ler

    fclose(arquivo);

    return 0;
}