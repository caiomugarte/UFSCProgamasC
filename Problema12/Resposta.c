#include <stdio.h>

int main()
{
    int ncolunas = 10;
    int nlinhas = 11;
    //STUNKS

   while (ncolunas < 51)
   {
       if (nlinhas == (ncolunas + 9))
       {
           nlinhas = ncolunas + 1;
       }
       printf("\n%i:", ncolunas);
       ncolunas++;
       while (nlinhas < (ncolunas + 9))
       {
           printf(" %i", nlinhas);
           nlinhas++;
       }
       
       
   }
   

}
