#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j = 0;
    float m[4][5] = {{1, 2, 3, 4, 55.5},
                     {3, 3, 3, 3, 3},
                     {9, 9, 9, 19.9, 29.9},
                     {9, 7, 19.9, 29.99, 29.9}};
    float menor = 10000;
    float somatoriaColuna = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (m[i][j] <= menor)
            {
                menor = m[i][j];
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
            somatoriaColuna += m[i][0];
    }

    printf("Menor elemento da matriz: %f\n", menor);
    printf("Soma dos elementos da primeira coluna da matriz: %f\n", somatoriaColuna);
    printf("Elementos da ultima linha da matriz: ");
        for (j = 0; j < 5; j++)
        {
                printf(" %f,", m[3][j]);
        }
}

