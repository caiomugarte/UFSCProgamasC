#include <stdio.h>

char calcularConceito(float nota)
{
    char conceito;
    if (nota <= 4.9)
    {
        conceito = 'D';
        return conceito;
    }
    else if (nota >= 5 && nota <= 6.9)
    {
        conceito = 'C';
        return conceito;
    }
    else if (nota >= 7 && nota <= 8.9)
    {
        conceito = 'B';
        return conceito;
    }
    else
    {
        conceito = 'A';
        return conceito;
    }
}


int main(int argc, char const *argv[])
{
    float nota;

    printf("Digite a nota do aluno.\n");
    scanf("%f", &nota);
    printf("O conceito e %c.", calcularConceito(nota));
}


