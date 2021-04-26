// Problema: Receber números e escrever na tela até que se digite o número 4890.

// Algoritmo informal:

// 1o) Receber um valor

// 2o) Printar e acrescentar 1 à ele enquanto o index for menor que 4890

// Fluxograma enviado em anexo no arquivo fluxograma.png

//

// Teste de mesa

//  n      |     resultado

// -------------------------

//  4880   |  
//         |  4881
//         |  4882
//         |  ...
//         |  4889
//         |  4890

//

// Programa em C
#include <stdio.h>

int main()
{
    int input;
    int index = 0;

    printf("Informe um numero inteiro para mostrar numeros até 4890 \n");
    scanf("%i", &input);

    while (index < 4890)
    {
        input++;
        index = input;
        printf("%i\n", input);
    }
    
    

}

