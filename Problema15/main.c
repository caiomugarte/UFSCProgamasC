#include <stdio.h>

int main()
{
    int saida = 0;

    for (int i = 0; i <= 30; i++)
    {
        if (saida != 30)
        {
            printf("%i,", saida);
        }else
        {
            printf("%i", saida);
        }
        
        saida++;
        
    }
    
}
