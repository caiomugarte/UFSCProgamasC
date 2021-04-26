#include <stdio.h>

int i;

int calcularMDC(int primeiro, int segundo){
    int mdc;

    for(i=1; i <= primeiro && i <= segundo; ++i)
    {
        // Checks if i is factor of both integers
        if(primeiro%i==0 && segundo%i==0)
            mdc = i;
    }

    return mdc;
} 

int main()
{
    int n1, n2;

    printf("Digite dois número, um em cada linha.\n");
    scanf("%i", &n1);
    scanf("%i", &n2);
    printf("O MDC entre %i e %i = %i.", n1, n2, calcularMDC(n1, n2));

}
