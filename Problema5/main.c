// Problema: Calcular a média de 5 números informados e mostre a média.

// Algoritmo informal:

// 1o) Receber 5 valores

// 2o) Calcular média e printar ela na tela

// Fluxograma enviado em anexo no arquivo fluxograma.png

//

// Teste de mesa

//  n      |     resultado

// -------------------------

//  1   |  
//  2   |  
//  3   |  
//  4   |  
//  5   |  
//      |  3.0*

//

// Programa em C
#include <stdio.h>

int main()
{
    float input, somatoria, media;


    for (int i = 0; i < 5; i++)
    {
        printf("Informe um numero \n");
        scanf("%f", &input);
        somatoria += input;
    }
    media = somatoria / 5;
    printf("Media: %.1f\n", media); 


    

}
