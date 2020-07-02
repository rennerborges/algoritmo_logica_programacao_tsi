#include <stdio.h>

// // Aqui estou criando o procedimento com o nome referente ao que ele faz!
// Onde está o char msg[30] estou declarando um parametro ou seja um valor que ira chegar
// Como variavel local para a função.

void printText(char msg[30]){
    // Aqui estamos imprimindo o valor que recebemos.
    printf("%s", msg);
}

int main()
{
    // Aqui estou declarando as variaveis
    char texto[30];

    // Vamos ler o texto

    printf("Informe o texto:");
    gets(texto);

    // Aqui estou chamando o procedimento criado acima com a varivel sendo passada como parâmetro!
    printText(texto);
    return 0;
}