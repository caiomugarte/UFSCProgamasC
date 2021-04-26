#include <stdio.h>

int main()
{
    int input = 0;
    printf("Informe um número para o tamanho do quadrado:\n");
    scanf("%i", &input);

    if (input > 1)
    {
        for (int i = 0; i < (input * input); i++)
        {
            if (i % input == 0)
            {
                printf("\n* ");
            }else{
                printf("* ");
            }
            
        }
        
    }
}
