#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char st[100];
    char st2[100];
    int t;
    int i;
    int j;
    
    printf("Informe a palavra\n");
    scanf("%s",st);
    printf("%s \n",st);
     t=strlen(st);
    printf("Tamanho da string = ");
    printf("%d \n",t);
    for(i=0;i<t;i++)
    {
        printf("%c \n",st[i]);
    }
    for(i=t;i>=0;i--)
    {
         printf("%c \n",st[i]);
         for(j=0;j<t;j++)
         {
             strcpy(st2[j],st[i]);
             //strcpy(st[i],st2[j]);
         }
         
    }
    printf("%s",st2);

}