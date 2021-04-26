#include <stdio.h>

int main()
{
    int n = 0, i = 0, m = 0, k = 0, t = 1, e = 0;

    printf("Informe um número para o tamanho da árvore:\n");
    scanf("%i", &n);

    k = 2 * (n + 1) - 1;

    for (i = 1; i <= k; i++)
    {
        if ((!(i % 2) == 0))
        {
            e = (k - i) / 2;
            for (m = 1; m <= e; m++)
            {
                printf(" ");
                if (m == e)
                {
                    for (t = 1; t <= i; t++)
                    {
                        if (t == i)
                        {
                            printf("\n");
                        }
                        else
                        {
                            printf("*");
                        }
                    }
                }
            }
        }
    }
}