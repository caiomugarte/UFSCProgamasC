#include <stdio.h>

int main()
{
    float valor = 10;
    int i = 0;
    float v[20] = {0};
    float somatoria = 0;
    float media = 0;
    printf("Informe os valores , 1 em cada linha. Informe 0 (zero) para finalizar.\n");

    while (valor != 0)
    {
        scanf("%f", &valor);
        v[i] = valor;

            somatoria += valor;

        i++;
    }
    media = somatoria / (i - 1);
    printf("Media: %f\n", media);
    printf("Valores acima da media: ");
    for (i = 0; i < (sizeof(v) / 4); i++)
    {
        if (v[i] > media)
        {
            //Fomrtação Print
            if (v[i + 1] < media || i == 19)
            {
                printf(" %f", v[i]);
            }else{
                printf(" %f,", v[i]);
            }
        }
    }
}
