#include <stdio.h>
#include <string.h>

#define array_tamanho 15

int calcularDivisiveis(int array[array_tamanho], int divisor)
{
    int divisores = 0;
    for (int i = 0; i < array_tamanho; i++)
    {
        if (array[i] % divisor == 0)
        {
            divisores++;
        }
    }

    return divisores;
}

int main()
{
    int divisor, elementos[array_tamanho];
    printf("Digite um número.\n");
    scanf("%i", &divisor);
    printf("Digite 15 valores, um em cada linha.\n");
    for (int i = 0; i < array_tamanho; i++)
    {
        scanf("%i", &elementos[i]);
    }

    printf("O número de divisores é: %i .\n", calcularDivisiveis(elementos, divisor));
}
