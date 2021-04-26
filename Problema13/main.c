#include <stdio.h>

int main()
{
    int saida = 5;
    do
    {
        if (saida != 100)
        {
        printf("%i,", saida);
        }else
        {
        printf("%i", saida);
        }
        
        
        saida++;
    } while (saida <= 100);
    
}
