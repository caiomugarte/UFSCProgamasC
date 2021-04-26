// Problema: Calcular a média de números que foram informados até se digitar -1. A cada número informado mostrar a quantidade de números já informados.

// Algoritmo informal:

// 1o) Informar quantidade de números informados sempre que receber valores até que se digite '-1'

// 2o) Calcular média de todas as entradas até a entrada '-1' e printar na tela

// Fluxograma enviado em anexo no arquivo fluxograma.png

//

// Teste de mesa

//  n      |     resultado

// -------------------------

//  1   |  
//  2   |  
//  3   |  
//  -1  |  
//      |  
//      |  2.0*

//

// Programa em C
#include <stdio.h>

int main()
{
    float input, somatoria, media;
    int contador = 0;


    while(input != -1){
        printf("Quantidade de Numeros Informados: %i\n", contador);
        printf("Informe um numero \n");
        scanf("%f", &input);
        if(input != -1){
        contador++;
        somatoria += input;
        }
    }
    media = somatoria / contador;
    printf("Media: %.1f\n", media); 
}
