#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 1, conta = 10, s = 0;
    for (conta = 10 ; conta <= 40 ; conta = conta + 10)
    {
        s = s + num;
        num = num + 2;
    }
    printf("\n\n\n s=%d \n nun=%d \n\n\n", s, num);
    return 0;
}