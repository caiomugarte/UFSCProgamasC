#include <stdio.h>
#include <string.h>

int main(){

    char s1[50], s2[50], s3[50], s4[50], s5[50], a;
    int i, j, b=0;

    printf("Informe 5 strings, uma em cada linha\n");

    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);
    scanf("%s", s4);
    scanf("%s", s5);

    a=s1[0];

    i=strlen(s1);
    for (j=0; j<i; j++){
        if(s1[j]==a){
            b=b+1;
        }
    }
    i=strlen(s2);
    for (j=0; j<i; j++){
        if(s2[j]==a){
            b=b+1;
        }
    }
    i=strlen(s3);
    for (j=0; j<i; j++){
        if(s3[j]==a){
            b=b+1;
        }
    }
    i=strlen(s4);
    for (j=0; j<i; j++){
        if(s4[j]==a){
            b=b+1;
        }
    }
    i=strlen(s5);
    for (j=0; j<i; j++){
        if(s5[j]==a){
            b=b+1;
        }
    }
    printf("Frequencia da letra %c = %d", a, b);
}