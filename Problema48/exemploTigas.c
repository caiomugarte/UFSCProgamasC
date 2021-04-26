#include <stdio.h>

char tigas[100] = "TIGAS";

//Coloca const char * para o método retornar conseguir retornar uma string
//A string que tu quer retornar tem que ser global, pois você usa o const
const char *returnTigas(){
    return tigas;
}

int main(int argc, char const *argv[])
{
    printf("%s", returnTigas());
}
