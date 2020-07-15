#include <stdio.h>

//Aqui estamos criando a função de Somar
// Onde é recebido duas variaveis e retorna a soma das mesmas

int Somar(int n1, int n2)
{
    // Aqui mostraremos o valor a ser retornado

    return n1 + n2;
}

// Aqui temos a função principal

int main()
{
    // Aqui estamos declarando as variaveis

    int soma, n1, n2;

    // Vamos pegar os valores a serem somados

    printf("Informe o primeiro valor inteiro:");
    scanf("%d", &n1);

    printf("Informe o segundo valor inteiro:");
    scanf("%d", &n2);

    // Aqui estamos atribuindo o valor retornado da função Somar na variavel soma
    // Passando os valores das variaveis n1 e n2 no escopo da main

    soma = Somar(n1, n2);

    // Aqui vamos mostrar o valor da soma

    printf("%d", soma);

    return 0;
}