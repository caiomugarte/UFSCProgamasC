#include <stdio.h>

int main()
{
    int saida = 30;

    while (saida >=0)
    {
        if (saida != 0)
        {
            printf("%i,", saida);
        }else{
            printf("%i", saida);
        }

        saida--;
        
    }
    
}
