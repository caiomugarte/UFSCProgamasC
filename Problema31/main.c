#include <stdio.h>

int main()
{
    int valor;
    int u[8];
    int w[9];
    int v[8] = {0};
    int i = 0;
    int j = 0;

    printf("Digite os valores para carregar o array U\n");
    for (i = 0; i < (sizeof(u) / 4); i++)
    {
        scanf("%i", &valor);
        u[i] = valor;
    }

    printf("Digite os valores para carregar o array W\n");
    for (i = 0; i < (sizeof(w) / 4); i++)
    {
        scanf("%i", &valor);
        w[i] = valor;
    }

    for (i = 0; i < (sizeof(w) / 4); i++)
    {
        for (j = 0; j < (sizeof(w) / 4); j++)
        {
            if (u[i] == w[j])
            {
                v[i] = u[i];
                if (i == ((sizeof(u) / 4) - 1))
                {
                    printf(" %i", v[i]);
                }
                else
                {
                    printf(" %i,", v[i]);
                }
            }
            /* code */
        }
    }
}
