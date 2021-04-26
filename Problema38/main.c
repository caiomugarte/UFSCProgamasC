#include <stdio.h>
int main(void)
{
    float listaAlunos[5] = {110, 120, 122, 105, 107};
    float notas[13][2] = {{110, 6}, {110, 5}, {105, 6}, {110, 8}, {122, 6.6}, {105, 9}, {122, 2}, {122, 8}, {107, 2}, {120, 6}, {107, 4}, {120, 7}, {120, 10}};
    int i, j, k;
    float somatoria;
    int divisor;
    float media;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 13; j++)
        {
            if (notas[j][0] == listaAlunos[i])
            {
                somatoria += notas[j][1];
                divisor++;
                media = somatoria / divisor;
            }
        }

        printf("Media do aluno \n %f = ", listaAlunos[i]);
        printf("%f\n", media);
        divisor = 0;
        media = 0;
        somatoria = 0;
    }
}