// Página 26

#include <stdio.h>

int main() {
    float km,tempo,ql,vm,cs;

    printf("Informe o(s) KM: ");
    scanf("%f",&km);

    printf("Informe o tempo percorrido: ");
    scanf("%f",&tempo);

    printf("Informe a quantidade de litros consumidos pelo veiculo: ");
    scanf("%f",&ql);

    vm = km/tempo;
    cs = km/ql;

    printf("A velocidade media é: %.2f, enquanto o consumo do veiculo é: %.2f",vm,cs );
    return 0;
}