#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    int vezes;
    char string[32] = {""};
    int i = 0;
    const char *temporario = string;
    printf("Informe uma string com 32 caracteres\n");
    gets(string);

    while (temporario = strstr(temporario, "aca"))
    {
        vezes++;
        temporario++;
    }

    printf("Numero de ocorrencias de aca: %i", vezes);
}
