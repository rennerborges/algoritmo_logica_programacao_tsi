#include <stdio.h>
#include <string.h>

int main(void)
{
    // Declarando as variaveis do tipo texto/string com as * assim definindo o ponteiro
    // O malloc recebe como argumento o número de bytes a ser alocado
    char *nome= malloc(NULL), *sobrenome= malloc(NULL);

    // Lendo as mesmas

    printf("Informe seu nome:");
    gets(nome);

    printf("Informe seu sobrenome:");
    gets(sobrenome);

    // Aqui faz a verificação se os dois são iguais
    // Para comparar strings no C é necessário a funçãp strcmp
    // Se retorna 0 é porque elas são iguais, se retorna <0 é porque a string 1 é menor , se retorna >0 porque a segunda e maior

    if (strcmp(nome,sobrenome) == 0){
        printf("Você por motivos estranhos tem o nome igual ao sobrenome! \n");
    }else{
        printf("Uau! Seu nome é diferente do seu sobrenome! \n");
    }
    return 0;
}