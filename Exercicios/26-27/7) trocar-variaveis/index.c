// Página 26

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Informe o valor de A: ");
    scanf("%d",&a);

    printf("Informe o valor de B: ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("A: %d, B: %d",a,b);

    return 0;
}