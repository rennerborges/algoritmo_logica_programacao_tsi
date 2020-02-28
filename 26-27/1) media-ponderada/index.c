// Página 26

#include <stdio.h>

int main() {
    char nome, disciplina;
    float nota1,nota2,nota3,media;
    int bimestre;

    printf("Infome o nome do aluno: ");
    scanf("%s",&nome);

    printf("Informe a disciplina correspondente: ");
    scanf("%s",&disciplina);

    printf("Informe o bimestre: ");
    scanf("%d",&bimestre);

    printf("Informe a nota 1: ");
    scanf("%f",&nota1);

    printf("Informe a nota 2: ");
    scanf("%f",&nota2);

    printf("Informe a nota 3: ");
    scanf("%f",&nota3);

    media = (nota1*1 + nota2*2 + nota3*3)/6;

    printf("A media ponderada é: %.1f", media);
    return 0;
}