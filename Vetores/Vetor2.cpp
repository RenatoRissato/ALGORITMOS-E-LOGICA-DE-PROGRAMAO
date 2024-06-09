#include <stdio.h>

int main ()
{
	int vetor [5]={50,10,20,40,5};//inicialização de vetor
	int x = 0; //x e o indice do vetor
	
	while(x < 5)
	{
		printf("\nDado armazenado no vetor: %i", vetor[x]);
		x++;
	}
	
}
