#include <stdio.h>

int main()
{
    int input = 1, soma = 0;

    printf("Informe um n�mero para a soma de cada d�gito:\n");
    scanf("%i", &input);
    if (input > 0 && input < 10000)
    {
        while (input > 0)
        {
            soma += (input % 10);
            input = input / 10;
        }

        printf("%i", soma);
    }
}
