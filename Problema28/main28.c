#include <stdio.h>
#include <math.h>

int main()
{
    int input = 0;
    printf("Informe um número para o tamanho do quadrado:\n");
    scanf("%i", &input);

    if (input > 1)
    {
        for (int i = 1; i <= input; i++)
        {

            /*
                     *
                   * * *
                 * * * * *   
               * * * * * * *
            */

            /*
                     *
                   * * *
                 * * * * * 
           */

            /*
                     *
                   * * * 
                     
          */
                for (int space = 1; space <= (input - i); space++)
                {
                    printf(" ");
                }
                for (int asterisco = 1; asterisco <= (2*i - 1 ); asterisco++)
                {
                    printf("*");
                }
                
            printf("\n");
            }
        }

        }
    
