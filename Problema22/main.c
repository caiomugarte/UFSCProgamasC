#include <stdio.h>

int main()
{
    float input;
    while(input != -1){
        printf("Informe a temperatura em Fahrenheit para conversão. Digite -1 para sair.\n");
        scanf("%f", &input);
        if(input != -1){
        printf("%.2f\n", ((input-32)/9) * 5);
        }
    }
}
