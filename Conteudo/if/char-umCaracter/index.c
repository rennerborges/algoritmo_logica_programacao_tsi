#include <stdio.h>
#include <string.h>

int main() {

    // Nesse caso o IF só funcionará para strings com um carácter

    char sexo;

    printf("Informe o sexo:");
    scanf("%s",&sexo);

    if(sexo == 'M'){
        printf("Masculino \n");
    }else{
        printf("Feminino \n");
    }

    return 0;
}