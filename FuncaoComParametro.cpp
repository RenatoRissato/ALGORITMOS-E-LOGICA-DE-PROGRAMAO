#include <stdio.h>
float somar(float x, float y)
{
	float soma;
	soma = x + y;
	return(soma);
	
}
int main ()
{
	float soma, x, y;
	printf("Entre com x: ");
	scanf("%f", &x);
	printf("Entre com y: ");
	scanf("%f", &y);
	soma = somar(x,y);
	printf("Valor da Soma: %f", soma);
	
}
