#include <stdio.h>
#include <string.h>

int main() {

    // Aqui foi inicializado a idade

    int idade = 18;

    // Aqui estamos capturando o valor da idade

    printf("Informe a idade:");
    scanf("%d",&idade);

    // Aqui se faz a verificação da idade
    if(idade >= 18){
        printf("Você é maior de idade!");
    }else{
        printf("Você é menor de idade!");
    }

    return 0;
}