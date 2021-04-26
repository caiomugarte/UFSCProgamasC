#include <stdio.h>

int main(void)
{
    float input, maior, menor;
    for (int i = 0; i < 5; i++)
    {
        printf("Informe um numero \n");
        scanf("%f", &input);

        if (i == 0)
        {
            maior = input;
            menor = input;
        }
        if(input > maior){
            maior = input;
        }else{
            menor = input;
        }
        
    }

    printf("O maior numero e: %.1f\n", maior);
    printf("O menor numero e: %.1f", menor);
}

