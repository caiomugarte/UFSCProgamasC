#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j = 0;
    float m[4][5] = {{1, 2, 3, 4, 55.5},
                     {3, 3, 3, 3, 3},
                     {9, 9, 9, 19.9, 29.9},
                     {9, 7, 19.9, 29.99, 29.9}};
    float maior = 0;
    float somatoria = 0;
    float media = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (m[i][j] >= maior)
            {
                maior = m[i][j];
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            somatoria += m[i][j];
        }
    }
    media = somatoria / 20;

    printf("Maior elemento da matriz: %f\n", maior);
    printf("Media dos elementos da matriz: %f\n", media);
    printf("Elementos da matriz maiores que a media: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (m[i][j] > media)
            {
                printf(" %f,", m[i][j]);
            }
        }
    }
}

