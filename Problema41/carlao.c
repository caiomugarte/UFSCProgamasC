//Aluno: Carlos José Persuhn       Data: 09/04/2021.

#include <stdio.h>
#include <string.h>

int main(void)
{
    char strings[5][100] = {""};
    int cont = 1;
    int qtt = 0;

    printf("Informe 5 strings, uma em cada linha\n");
    for (int i = 0; i < 5; i++)
    {
        gets(strings[i]);
    }

    /*for(int i = 0; i < 5; i++){ //Saída para a string.
        printf("strings %d: %s" ,cont ,strings[i]);
        cont++;
    }*/
    /*
    Maça
    if strcmp(input, "maça")
    Acertou!!
    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; strings[i][j] != '\0'; j++)
        {
            printf("%i\n", strcmp(strings[0], strings[i]));
            //printf("::%d\n", strcmp(strings[0][0], strings[i][j]));
            // if(strcmp(strings[0][0], strings[i][j]) == 0)
             qtt++;
        }
    }
    //printf(": %c" ,strings[0][0]);

    return (0);
}