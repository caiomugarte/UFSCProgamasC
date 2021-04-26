#include <stdio.h>

int main()
{
    float notas;
    int i = 0;
    float vn1[10], vn2[10];
    float media[10];

    printf("Informe os 10 valores para vn1, 1 em cada linha.\n");
    for (i = 0; i < (sizeof(vn1) / 4); i++)
    {
        scanf("%f", &notas);
        vn1[i] = notas;
    }

    printf("Informe os 10 valores para vn2, 1 em cada linha.\n");
    for (i = 0; i < (sizeof(vn2) / 4); i++)
    {
        scanf("%f", &notas);
        vn2[i] = notas;
    }

    for (i = 0; i < (sizeof(vn1) / 4); i++)
    {
        media[i] = (vn1[i] + vn2[i]) / 2;
        if (i != (sizeof(vn1) / 4) - 1)
        {
            printf(" %.1f,", media[i]);
        }
        else
        {
            printf(" %.1f", media[i]);
        }
    }
}
