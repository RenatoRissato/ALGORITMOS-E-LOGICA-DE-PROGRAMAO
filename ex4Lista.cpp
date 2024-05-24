#include <stdio.h>

int main ()
{
	int valor, maior, menor, soma, i;
	float media;
	do 
	{
		printf ("Digite o %i valor: ", i+1);
		scanf("%i", &valor);
		
		if (valor > maior)
		{
			maior = valor;
		}
		if (valor < menor)
		{
			menor = valor;
		}
		
		soma += valor;
		
		i++;
		
	}while (i<20);

    media = soma/20; 

    printf("Maior valor: %i\n", maior);
    printf("Menor valor: %i\n", menor);
    printf("Media dos valores: %.2f", media);
		
}
