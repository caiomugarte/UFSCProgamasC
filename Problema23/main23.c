#include <stdio.h>

int main()
{
    int input = 0, nrIntervalo = 0, nrForaIntervalo = 0;

    for (int i = 0; i < 10; i++)
    {

        printf("Informe 10 números:\n");
        scanf("%i", &input);

        if (input >= 10 && input <= 20)
        {
            nrIntervalo++;
        }
        else
        {
            nrForaIntervalo++;
        }
    }

    printf("Vezes que foram informados números dentro da faixa de [10-20]: %i\n", nrIntervalo);

    printf("Vezes que foram informados números fora da faixa de [10-20]: %i\n", nrForaIntervalo);
}
