#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
    // Aqui vamos declarar as variaveis
    // Ficando atento que o FILE é utilizado para se referenciar a um arquivo
    // O * representa um ponteiro que a grosso modo faz referencia a um espaço fisico da memoria

    FILE *arquivo;
    char texto[100];

    // Vamos abrir/criar o arquivo, sempre lembrando que o 'a' serve para adicionar novas linhas
    // Caso o arquivo não exista ele criará ao contrário do 'w' que apagaria e criaria novamente

    // O fopen é uma função que serve para criar ou abrir um arquivo

    arquivo = fopen("teste.txt", "a");

    // Vamos verificar se deu certo o processo de criar o arquivo
    if (arquivo == NULL)
    {
        // Ignorem o ANSI_COLOR_RED e derivados, estão aí por valor estetico

        printf(ANSI_COLOR_RED "Não foi possivel ler o arquivo!" ANSI_COLOR_RESET);
        exit(1);
    }

    // Se chegou aqui é porque está tudo dentro dos conformes

    // Vamos capturar um valor para o texto

    printf("Informe o texto a ser salvo: ");
    gets(texto);

    // Vamos aproveitar e adicionar um texto a funçção que faz isso é a fprintf()

    fprintf(arquivo, "%s \n", texto);

    // Aqui vamos fechar o arquivo que editamos/criamos

    fclose(arquivo);

    return 0;
}