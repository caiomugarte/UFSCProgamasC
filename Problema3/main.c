// Problema: Mostrar média de três números informados com uma casa após a vírgula e informar aprovado se a média for maior que 6

// Algoritmo informal:

// 1o) Receber três números

// 2o) Calcular Médoa

// 3o) Printar Média

// 4o) Mostrar aprovado caso a média seja maior que 6

// Fluxograma enviado em anexo no arquivo fluxograma.png

//

// Teste de mesa

//  n      |     resultado

// -------------------------

//  10   |  
//  10   |  
//  10   |  
//       |  10*
//       |  APROVADO!!!!
//       |  

//

// Programa em C
#include <stdio.h>

int main(){
    float input, somatoria, media;


    for (int i = 0; i < 3; i++)
    {
        printf("Informe um numero \n");
        scanf("%f", &input);
        somatoria += input;
    }
    media = somatoria / 3;
    printf("Media: %.1f\n", media); 

    if(media > 6){
        printf("APROVADO!!!!");
    }else{
        printf("REPROVADO!!!!");
    }
    
    

}