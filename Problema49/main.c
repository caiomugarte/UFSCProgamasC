#include <stdio.h>
#include <string.h>

#define str_tamanho 100

int calcularCaracteres(char palavra[str_tamanho]){
    int caracteres = 0, i = 0;
    for (i = 0; i < str_tamanho; i++)
    {
        if (palavra[i] != '\000' && palavra[i] != ' ')
        {
            caracteres++;
        }
    }

  return caracteres;
}

int main()
{
    char string[str_tamanho] = {""};
    printf("Digite uma frase. \n");
    gets(string);
    printf("A quantidade de caracteres é: %i", calcularCaracteres(string));
}
