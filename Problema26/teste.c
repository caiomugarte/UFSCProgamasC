#include <stdlib.h>

int main()
{
    int numero, SOMA = 0;

    printf("Informe um n�mero para a soma de cada d�gito:");
    scanf("%d", &numero);

    if (numero > 0)
    {

        while (numero > 0)
        {

            SOMA = SOMA + numero % 10;

            numero = numero / 10;
        }

        printf("%d\n", SOMA);
    }

    else
        printf("Numero igual ou menor que zero\n");

    return 0;
}