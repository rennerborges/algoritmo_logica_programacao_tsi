#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float raio, area;

    printf("Informe o raio: ");
    scanf("%f",&raio);

    area = 3.14 * powf(raio, 2);

    printf("A area é: %.1f", area);
    return 0;
}