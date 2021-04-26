#include <stdio.h>

int main()
{
    int saida = 4;
    while (saida <= 42)
    {
        if (saida != 42)
        {
        printf("%i,", saida);

        }else
        {
        printf("%i", saida);
        }
        
        
        saida++;
    }
    
}
