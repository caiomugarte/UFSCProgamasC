#include <stdio.h>

int main()
{
    int input;

    printf("Informe um numero\n");
    scanf("%i", &input);

    if(input % 2 == 0){
        printf("Esse numero e par");
    }else{
        printf("Esse numero e impar");
    }
}
