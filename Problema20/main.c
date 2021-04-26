#include <stdio.h>

int main()
{
    int voto = 1, somatorioA = 0, somatorioB = 0, somatorioC = 0, votosNulos = 0, votosBrancos = 0, totalVotos = 0;

    while (voto != 0)
    {
        printf("Informe os votos digitando um valor entre de 1 a 5 em cada linha. Informe 0 (zero) para finalizar e ver o resultados.\n");
        scanf("%i", &voto);
        switch (voto)
        {
        case 1:
            somatorioA++;
            totalVotos++;
            break;
        case 2:
            somatorioB++;
            totalVotos++;
            break;
        case 3:
            somatorioC++;
            totalVotos++;
            break;
        case 4:
            votosNulos++;
            totalVotos++;
            break;
        case 5:
            votosBrancos++;
            ((somatorioA > somatorioB && somatorioA > somatorioC) ? somatorioA++ : ((somatorioB > somatorioC ? somatorioB++ : somatorioC++)));
            totalVotos++;
            break;
        }
    }
    printf("Votos candidato 1: %i\n", somatorioA);
    printf("Votos candidato 2: %i\n", somatorioB);
    printf("Votos candidato 3: %i\n", somatorioC);
    printf("Votos nulos: %i\n", votosNulos);
    printf("Votos brancos: %i\n", votosBrancos);
    printf("Total de votos: %i\n", totalVotos);
}