#include <stdio.h>

int i;

int calcularFatorial(input)
{
    int fatorial = 1;
    for (i = 1; i <= input; i++)
    {
        fatorial *= i;
    }

    return fatorial;
}

int main()
{
    int input;
    printf("Digite um numero\n");
    scanf("%i", &input);
    printf("O fatorial de %d é %d.\n", input, calcularFatorial(input));
}
