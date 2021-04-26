#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    char palavra[100] = {""};
    char reversa[100] = {""};

    gets(palavra);

    strcpy(reversa, palavra);
    strrev(reversa);
    

    if (strcmp(palavra, reversa) == 0)
    {
        printf("Palindroma = %s", palavra);
    }
}
