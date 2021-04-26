#include <stdio.h>

int main()
{
    int input = 0, multiplicador = 0;
    printf("Informe numero para apresentação da tabuada: \n");
    scanf("%i", &input);

    while (multiplicador <= 10)
    {
        printf("%i x %i = %i\n", input, multiplicador, input*multiplicador);
        multiplicador++;
    }
    
}
