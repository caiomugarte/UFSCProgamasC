#include <stdio.h>

int calcularFatorial(int input)
{
    int fatorial = 1;
    for (int i = 1; i <= input; i++)
    {
        fatorial *= i;
    }

    return fatorial;
}

float calcularS(int input)
{
    float s;
    float fracao;
    for (int i = 0; i <= input; i++)
    {
        fracao += 1.0/calcularFatorial(i);
    }
    
    s = fracao;
    return s;
}

int main(int argc, char const *argv[])
{
    int input;
    printf("Digite um número\n");
    scanf("%i", &input);
    printf("S = %f", calcularS(input));
}
