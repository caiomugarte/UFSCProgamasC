#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 0, b = 0;
    int c = 0;
    int i = 0;
    int j = 1;
    printf("Informe dos valores de um intervalo para análises dos números primos:\n");
    scanf("%in", &a);
    scanf("%i", &b);
    printf("Números primos do intervalo:\n");
    for (int i = a; i <= b; i++)
    {
        // i = 1010
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            
            printf("%i\n", i);
        }
        j = 0;
        c = 0;

    }

}
