#include <stdio.h>

int main()
{
	int i, numero;
	printf("Qual tabuada voce quer fazer? ");
	scanf("%i", &numero);
	for	(i=0; i <= 10; i++)
    {	
		printf("\n%i x %i = %i", numero, i, numero*i );
	}
}
