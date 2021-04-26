#include <stdio.h>

int main()
{
    int valor = 10;
    int array[20];
    int i = 0;


    for (i = 0; i < (sizeof(array) / 4); i++)
    {
        array[i] = valor;
        valor++;

    }
    for (i = 0; i < (sizeof(array) / 4); i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%i, ", array[i]);
        }
    }
    printf("\n");
    for (i = 0; i < (sizeof(array) / 4); i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%i, ", array[i]);
        }
    }
    
    /*for (int i = 0; i < sizeof(array); i++)
    }
    
    {
        printf("\n%i", array[i]);
    }*/
}
