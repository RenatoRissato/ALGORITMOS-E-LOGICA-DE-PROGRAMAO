// 15) Recebidos valores numéricos entre zero e cinco, escreva-os na forma literal.

#include<stdio.h>

int main()
{
	int valor;
	
	printf("Entre com um valor entre 0 e 5: ");
	scanf("%i",&valor);
	
	if(valor == 0)
	{
		printf("Zero");
	}
	else if(valor == 1)
	{
		printf("Um");
	}
	else if(valor == 2)
	{
		printf("Dois");
	}
	else if(valor == 3)
	{
		printf("Tres");
	}
	else if(valor == 4)
	{
		printf("Quatro");
	}
	else if(valor == 5)
	{
		printf("Cinco");
	}
	else
	{
		printf("\nEntre com um valor entre 0 e 5");
	}
}
