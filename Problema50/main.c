#include <stdio.h>
#include <string.h>

#define array_tamanho 10

int numeros[array_tamanho] = {0};
void lerElementos(int array[array_tamanho])
{
    for (int i = 0; i < array_tamanho; i++)
    {
        scanf("%i", &array[i]);
    }

    array = numeros;
}

int acharMaior(int array[array_tamanho])
{
    int maior = 0;
    for (int i = 0; i < array_tamanho; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }
    return maior;
}

int acharMenor(int array[array_tamanho])
{
    int menor = array[0];
    for (int i = 0; i < array_tamanho; i++)
    {
        if (array[i] < menor)
        {
            menor = array[i];
        }
    }

    return menor;
}

int main(int argc, char const *argv[])
{
    printf("Digite 10 valores, um em cada linha.\n");
    lerElementos(numeros);
    printf("O maior elemento é: %i .\n", acharMaior(numeros));

    printf("O menor elemento é: %i .\n", acharMenor(numeros));
}
