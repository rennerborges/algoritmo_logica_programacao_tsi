// Página 26

#include <stdio.h>

int main() {
    char nome[60], disciplina[60];
    float nota1,nota2,nota3,media;
    int bimestre;

    printf("Infome o nome do aluno: ");
    gets(nome);

    printf("Informe a disciplina correspondente: ");
    gets(disciplina);

    printf("Informe o bimestre: ");
    scanf("%d",&bimestre);

    printf("Informe a nota 1: ");
    scanf("%f",&nota1);

    printf("Informe a nota 2: ");
    scanf("%f",&nota2);

    printf("Informe a nota 3: ");
    scanf("%f",&nota3);

    media = (nota1*1 + nota2*2 + nota3*3)/6;

    printf("=================================================\n");
    printf("Aluno: %s \n",nome);
    printf("Disciplina: %s \n",disciplina);
    printf("Bimestre: %d \n",bimestre);
    printf("Notas 1,2,3 respectivamente: %.1f, %.1f, %.1f \n", nota1,nota2,nota3);
    printf("=================================================\n");
    printf("A media ponderada é: %.1f \n", media);
    return 0;
}