#include <stdio.h>
#include <string.h>
# include <stdlib.h>

int main()
{
     char st[32];
     int ctl=0;
     int i;


    printf("Informe uma string com 32 caracteres\n");
    scanf("%s",st);
    for(i=0;i<32;i++)
    {
        if(st[i] == 'a' )
        {
            ctl=ctl+1;
        }
    }
  printf(" Numero de ocorrencias de aca: %d",ctl);
}