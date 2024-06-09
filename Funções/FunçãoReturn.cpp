#include <stdio.h>
float somar()
{
	float  x, y, soma;
	printf("Entre com x: ");
	scanf("%f", &x);
	printf("Entre com y: ");
	scanf("%f", &y);
	soma = x + y;
	return(soma);
	
}
int main ()
{
	float soma;
	soma = somar();
	printf("Valor da Soma: %f", soma);
	
}
