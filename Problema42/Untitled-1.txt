#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>

int main() {
 setlocale(LC_ALL, "");
 int i ,valor = 0;
 char palavra[15], inversa[15];
 int j=0;
 
 printf("Digite uma palavra: ");
 
 scanf("%s",palavra);
 
 //strcpy(inversa, palavra);


 for(i=strlen(palavra)-1; i>=0; i--){
 	inversa[j]=palavra[i];
 	j++;
 
 }

 valor = strcmp(palavra, inversa);

 if (valor == 0)
   printf("Palindroma = Sim\n");
 else
   printf("Palindroma = Nao\n");

 return 0;
}