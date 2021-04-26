#include <stdio.h>

int main()
{
    int saida = 1000;

    while (saida >= 1)
    {
        if (saida != 1 && (saida % 2 != 0))
        {
            printf("%i,", saida);
        }else if (saida == 1 && (saida % 2 != 0))
        {
            printf("%i", saida);
        }
        

        saida--;
        
        

        
    }
    
}
