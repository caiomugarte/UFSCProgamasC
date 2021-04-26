#include <stdio.h>
#include <conio.h>
int main(void){
    int a,b,c,d,e,votostotais;
    int valor = -1;
a = 0;
b = 0;
c = 0;
d = 0;
e = 0;
    while (valor != 0){
        printf("Digite 1 para o Candidato A: \nDigite 2 para o Candidato B: \nDigite 3 para o Candidato C:\nDigite 4 para voto nulo:\nDigite 5 para voto em branco: \nDigite 0 para apurar os votos:");
        scanf("%d",&valor);
        switch (valor){

            case 1 :
                a +=1;
                break ;
            case 2 :
                b +=1;
                break ;
            case 3 :
                c +=1;
                break ;
            case 4 :
                d +=1;
            case 5 :
                e +=1;
                if (a > b && a > c){
                a +=1;
                break;}
                if (b > a && b > c){
                b +=1;
                break;}
                if (c > a && c > b){
                c +=1;
                break;}
        }
    }
    votostotais =
    printf("Votos Candidato A: %d \n",a);
    printf("Votos Candidato B: %d \n",b);
    printf("Votos Candidato C: %d \n",c);
    printf("Votos em nulo: %d \n",d);
    printf("Votos em Branco: %d \n",e);
 }