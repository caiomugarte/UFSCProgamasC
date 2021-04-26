#include <stdio.h>
#include <stdbool.h>



bool checkTriangulo(float x, float y, float z)
{
    bool isTriangulo;
    if (x + y <= z || x + z <= y || y + z < x)
    {
        isTriangulo = false;
        return isTriangulo;
    }
    else
    {
        isTriangulo = true;
        return isTriangulo;
    }
}

int main()
{
    float lados[3];
    printf("Digite três valores, um em cada linha.\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &lados[i]);
    }
    if (checkTriangulo(lados[0], lados[1], lados[2]))
    {
        printf("Estes valores formam um triângulo.");
    }
    else
    {
        printf("Estes valores não formam um triângulo.");
    }
}
