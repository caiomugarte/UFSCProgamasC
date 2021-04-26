#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i = 0, j = 0;
    char palavra[100] = {""};
    int T;
    int c = 0;

    gets(palavra);

    T = strlen(palavra);
    printf("%d\n", T);
    char inversa[T];
    for (i = T - 1; i > 0; i-- && j++)
    {
        inversa[i] = palavra[j];
        printf("%d\n", i);
    }

    if (strcmp(inversa, strrev(inversa)) == 0)
    {
        printf("%s", inversa);  
    }
}