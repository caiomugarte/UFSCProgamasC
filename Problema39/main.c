#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    int tamanho;
    char string[3][100];

    printf("Informe 3 strings, uma em cada linha\n");
    for (i = 0; i < 3; i++)
    {
        gets(string[i]);
    }
    for (i = 0; i < 3; i++)
    {
        tamanho = strlen(string[i]);
        printf("Tamanho da string %i = %i\n", (i + 1), tamanho);
    }
}
