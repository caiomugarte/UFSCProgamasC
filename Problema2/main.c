// Problema: Mostrar os 100 proximas numeros a partir de uma entrada do usuario

// Algoritmo informal:

// 1o) Receber Numero Informado do Usuario

// 2o) Somar 1 à entrada e ao index e mostrar na tela enquanto o index for < que 100

// Fluxograma enviado em anexo no arquivo fluxograma.png

//

// Teste de mesa

//  n      |     resultado

// -------------------------

//  1    |  2*
//       |  3*
//       |  .
//       |  .
//       |  100*
//       |  101*

//

// Programa em C
#include <stdio.h>

int main(){
    int input;
    int index = 0;

    printf("Informe um numero inteiro para mostrar os proximos 100 numeros inteiros \n");
    scanf("%i", &input);

    while (index < 100)
    {
        input++;
        printf("%i\n", input);
        index++;
    }
    
    

}
