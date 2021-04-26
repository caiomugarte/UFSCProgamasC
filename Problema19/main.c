#include <stdio.h>

int main()
{
    int pnumero = 1, sequencia = 1;

    while(pnumero <= 10){
        printf("\n(%i,", pnumero);
            while (sequencia <= 10)
        {
            if (sequencia != 10)
            {
                printf(" %i", sequencia);
            }else if (sequencia == 10 && pnumero != 10)
            {
                printf(" %i),", sequencia);
            }else
            {
                printf(" %i)", sequencia);
            }
            
            
            sequencia ++;
            
        }
        
       
        sequencia = 1;
        pnumero++;
    }

}
