#include <stdio.h>

int main()
{
    int saida = 0;

    while (saida <= 1000)
    {
        if (saida != 1000 && (saida % 2 == 0))
        {
            printf("%i,", saida);
        }else if (saida == 1000 && (saida % 2 == 0))
        {
            printf("%i", saida);
        }
        

        saida++;
        
        

        
    }
    
}
