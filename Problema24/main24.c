#include <stdio.h>

int main()
{
    int input = 0;
    int fatorial = 1;
    printf("Informe um número para obter o fatorial:\n");
    scanf("%i", &input);

    //3 * (3-1) * ((3-1) -1)
    // i = 3
    /*
    i < 1 ? Sim
    3 * (3 -1) 6


    */
    for (int i = 1; i <= input; i++)
    {
        fatorial = fatorial * i;
    }

    printf("%i", fatorial);
    
}
