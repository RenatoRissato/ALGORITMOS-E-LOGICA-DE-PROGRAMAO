#include <stdio.h>

int main ()
{
	int matriz[3][5];
	int contapositivo=0, contanegativo=0, contazero=0;
	
	for(int x=0; x <= 2; x++)
	{
		for(int y=0; y<=4; y++)
		{
			printf("Entre com valor: ");
			scanf("%i", &matriz[x][y]);
			if (matriz [x][y] > 0)
			{
				contapositivo++;
			}
			else if (matriz[x][y]==0)
			{
				contazero++;
			}
			else 
			{
				contanegativo++;
			}
		}
		
	}
	printf("\nQuantidade de positivos: %i", contapositivo);
	printf("\nQuantidade de negativos: %i", contanegativo);
	printf("\nQuantidade de zeros: %i", contazero);	
}
