#include <stdio.h>

int main()
{
    int input, motocicletas = 0, automovel = 0, caminhao = 0;
    while (input != 0)
    {
    printf("Informe o tipo de veiculo de acordo com o codigo \n");
    scanf("%i", &input);

    switch (input)
    {
    case 1 :
        motocicletas++;
        break;
    case 2 :
        automovel++;
        break;
    case 3 :
        caminhao++;
        break;
    }
    }

    printf("Total de motocicletas: %i\n", motocicletas);
    printf("Total de automovel: %i\n", automovel);
    printf("Total de caminhao: %i\n", caminhao);

}
