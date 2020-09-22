#include <stdio.h>
#include <string.h>

int main() {

    int valor_alcool, valor_gasolina, txv;
    
    printf("Digite o valor do álcool:");
    scanf("%d", &valor_alcool);

    printf("Digite o valor da gasolina:");
    scanf("%d", &valor_gasolina);

    txv = valor_alcool/valor_gasolina;

    if(txv < 0.7){
        printf("Compensa abastecer no álcool");
    }else{
        printf("Compensa abastecer na gasolina");
    }

    return 0;
}