#include <stdio.h>
#include <string.h>

int main() {

    float valor_alcool, valor_gasolina, txv;
    
    printf("Digite o valor do álcool:");
    scanf("%f", &valor_alcool);

    printf("Digite o valor da gasolina:");
    scanf("%f", &valor_gasolina);

    txv = valor_alcool/valor_gasolina;

    if(txv < 0.7){
        printf("Compensa abastecer no álcool");
    }else{
        printf("Compensa abastecer na gasolina");
    }

    return 0;
}