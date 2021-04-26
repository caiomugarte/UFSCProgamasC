#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j = 0;
    int n;
    int valor;
    int index;

    printf("Informe o valor de n:\n");
    scanf("%i", &n);
    int m[n][n];

    printf("Informe os valores para a matriz (1 em cada linha):\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%i", &valor);
            m[i][j] = valor;
        }
    }

    printf("Elementos da diagonal principal: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d,", m[i][j]);
            }
        }
    }
    printf("\n");

    printf("Elementos da diagonal secundaria: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            index = i + j;
            if (index == n - 1)
            {
                printf("%d,", m[j][i]);
            }
        }
    }
}
