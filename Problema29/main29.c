#include <stdio.h>

int main()
{
    int inputP;
    int inputS;
    int mdc;
    printf("Informe dois números para determinar o MDC:\n");
    scanf("%i", &inputP);
    scanf("%i", &inputS);


    for (int i = 1; i <= inputP && i <= inputS; i++)
    {
        if (inputP % i == 0 && inputS % i == 0 )
        {
            mdc = i;
        }
        
    }

    printf("%i", mdc);
    


    /*
    10 / 20 ||| 2
     5   10 ||| 2
     5    5 ||| 5
      1   1 |||
            |||
            |||
            |||
            |||
    
    
    */
}
