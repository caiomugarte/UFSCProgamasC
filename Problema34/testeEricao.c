#include <stdio.h>

int main(){
    int n, m;
    int v[n];


    printf("Informe o tamanho do vetor:\n");
    scanf("%d",&n);
    printf("Informe os valores para o vetor (1 em cada linha):\n");
        for(int i=0;i<n;i++) {
        scanf("%d",&v[i]);
   }
   for(int b=0;b<n;b++) {
       for(int i=0;i<n;i++) {
       m=v[b]*v[i];
       printf("%d,",m);
  }
  printf("\n");
 }
}