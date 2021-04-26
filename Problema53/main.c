#include <stdio.h>
#include <string.h>

#define string_size 10

const char *my_strcat(char string1[string_size], char string2[string_size])
{
    int i, j;
    for (i = 0; string1[i] != '\0'; ++i)
        ;
    for (j = 0; string2[j] != '\0'; ++j, ++i)
    {
        string1[i] = string2[j];
    }
    // \0 represents end of string
    string1[i] = '\0';

    return string1;
}

int main()
{
    char string1[string_size] = {""};
    char string2[string_size] = {""};

    printf("Digite duas strings, uma em cada linha.\n");
    gets(string1);
    gets(string2);

    printf("%s", my_strcat(string1, string2));
}
