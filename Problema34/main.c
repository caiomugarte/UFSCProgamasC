#include <stdio.h>

int main()
{
    int valor = 0;
    int tamanhoArray = 0;
    int i = 0;
    int leds[4]

    printf("Informe o tamanho do vetor:\n"); 
    scanf("%i", &tamanhoArray);
    int v[tamanhoArray];
    printf("Informe os valores para o vetor (1 em cada linha):\n");

    //i = 1
    for (i = 0; i < tamanhoArray; i++)
    {
        scanf("%d", &valor);
        v[i] = valor;
    }

    for (i = 0; i < tamanhoArray; i++)
    {
        for (int j = 0; j < tamanhoArray; j++)
        {
            printf("%i, ", v[i] * v[j]);
        }
        printf("\n");
        
    }

    
    
}
