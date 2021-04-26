#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i = 0, j = 0;
    char string[5][100] = {""};
    char letra;
    int vezes = 0;
    printf("Informe 5 strings, uma em cada linha\n");
    for (i = 0; i < 5; i++)
    {
        gets(string[i]);
    }

    letra = string[0][0];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (string[i][j] == letra)
            {
                vezes++;
            }
        }
    }
    printf("Frequencia da letra '%c' = %i ", letra, vezes);
}
