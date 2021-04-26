#include <stdio.h>

int i;

int calcularDelta(int a, int b, int c)
{

    int delta;
    delta = b * b - 4 * a * c;
    return delta;
}

float calcularBhaskara(int a, int b, int c)
{
    float x1;
    x1 = (-b + sqrt(calcularDelta(a, b, c))) / (2 * a);
    return x1;
}

int main(int argc, char const *argv[])
{
    int numeros[3] = {0};
    printf("Digite os valores de a, b e c, um em cada linha.\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%i", &numeros[i]);
    }
    if (calcularDelta(numeros[0], numeros[1], numeros[2]) < 0)
    {
        printf("A equação não possuir raizes reais");
    }
    else
    {

        printf("A raíz positiva e %f ", calcularBhaskara(numeros[0], numeros[1], numeros[2]));
    }
}
