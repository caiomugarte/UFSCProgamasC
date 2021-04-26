#include <stdio.h>

int matriz[3][3];
int i, j;

void printarElementosCubo(int matriz[i][j]){
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = (matriz[i][j] * matriz[i][j]) * matriz[i][j];
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somarQuadradosMatriz(int matriz[i][j])
{
    int potencia;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            potencia += matriz[i][j] * matriz[i][j];
        }
    }

    return potencia;
}

void lerElementosMatriz()
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }
}

int main()
{
    printf("Digite os elementos da matriz, um em cada linha:");
    lerElementosMatriz();
    printf("Somatório dos quadrados: %i\n", somarQuadradosMatriz(matriz));
    printarElementosCubo(matriz);
}
