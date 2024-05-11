#include <stdio.h>

int main ()
{
	int vetor [5];
	int x = 0; // x é o indice do vetor
   //laço para o preenchimeno do vetor
	while(x < 5)
	{
		printf("Entre com valor inteiro: ");
		scanf("%i", &vetor[x]); //grava o valor do vetor
		x++; //incrementa a variavel de controle do indice
		
	}
	//laço para leitura dos dados do vetor
   x=0;
	while(x < 5)
	{
		printf("\nDado armazenado no vetor: %i", vetor[x]);
		x++;
		}	
	
	
}
