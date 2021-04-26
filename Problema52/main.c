#include <stdio.h>
#include <string.h>

#define data_tamanho 10
#define diaMes_tamanho 2
#define ano_tamanho 4
#define nomeMes_tamanho 100;

int inputData;
int dia;
int mes;
int ano;

const char *getNomeMes(int mes)
{
    switch (mes)
    {
    case 1:
        return "Janeiro";
        break;
    case 2:
        return "Fevereiro";
        break;
    case 3:
        return "Março";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Maio";
        break;
    case 6:
        return "Junho";
        break;
    case 7:
        return "Julho";
        break;
    case 8:
        return "Agosto";
        break;
    case 9:
        return "Setembro";
        break;
    case 10:
        return "Outubro";
        break;
    case 11:
        return "Novembro";
        break;
    case 12:
        return "Dezembro";
        break;

    default:
        break;
    }
}

void lerData()
{
    scanf("%i/%i/%i", &dia, &mes, &ano);
    printf("%i de %s de %i.", dia, getNomeMes(mes), ano);
}

int main()
{
    printf("Digite uma data no formato DD/MM/AAAA.");
    lerData();
}
