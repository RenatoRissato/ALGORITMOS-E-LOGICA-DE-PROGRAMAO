#include <stdio.h>

int main ()
{
	int vetor [5];
	int x = 0; // x � o indice do vetor
   //la�o para o preenchimeno do vetor
	while(x < 5)
	{
		printf("Entre com valor inteiro: ");
		scanf("%i", &vetor[x]); //grava o valor do vetor
		x++; //incrementa a variavel de controle do indice
		
	}
	//la�o para leitura dos dados do vetor
   x=0;
	while(x < 5)
	{
		printf("\nDado armazenado no vetor: %i", vetor[x]);
		x++;
		}	
	
	
}
