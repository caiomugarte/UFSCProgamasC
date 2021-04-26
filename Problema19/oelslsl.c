#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int i = 1;
    bool isPrimo = true;

    printf("Informe dos valores de um intervalo para análises dos números primos:\n");

    scanf("%i", &a);
    scanf("%i", &b);

    printf("Números primos do intervalo:\n");
    //1 <= 13 
   
        /* code */
    
        for (int i = 1; i <= b; i++)
        {
        
            if (a % i == 0)
            {
                c++;
            }
   
        
        }
    if (c == 2)
    {
        printf("%i,", i);
        printf("PRIMO");
    }else{
        printf("TIO");
    }
    }

