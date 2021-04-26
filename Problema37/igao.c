#include <stdio.h>
int main(void)
{
	int n, i, j, k;
	int indice, valor;
	printf("Informe o valor de n:\n");
	scanf("%d", &n);
	int matriz[n][n];

	printf("Informe os valores para a matriz (1 em cada linha):\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("Elementos da diagonal principal: ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				printf("%d,", matriz[i][j]);
			}
		}
	}
	printf("\n");

	printf("Elementos da diagonal secundaria: ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			indice = i + j;
			if (indice == n - 1)
			{
				printf("%d,", matriz[i][j]);
			}
		}
	}
}