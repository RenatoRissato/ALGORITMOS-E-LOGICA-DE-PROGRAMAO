#include <stdio.h>

int main ()
{
	int vetor[30];
	int vetordobrado[30];
	int i;
	
	printf ("Digite 30 números inteiros:\n");
	for (int i = 0; i < 30; i++)
	{
		printf("Numero %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
	
	for(int i = 0; i < 30; i++)
	{
		if(i % 2 == 0)
		{
			vetordobrado[i] = 2 * vetor[i];
		}
		else
		{
		    vetordobrado[i]	= 3 * vetor[i];
		}
	}
	
	printf ("\nVetor modificado :\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%i ", vetordobrado[i]);
	}
	
	
}
