# include <stdio.h>

int main (void)
{
int u , v;
 for(u = 10; u<= 50; u++)
 {
     printf("\n%d:", u) ;
     for(v = u+1; v<u+10;v++)
     {
         printf("%d ",v);
     }
 }
}