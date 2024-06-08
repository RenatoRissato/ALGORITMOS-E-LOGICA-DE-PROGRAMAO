#include <stdio.h>

void media ()
{
	float n1, n2, media;
	printf ("Entre com o valor de n1: ");
	scanf("%f", &n1);
	printf("Entre com o valor de n2: ");
	scanf("%f", &n2);
	media = (n1+n2)/2;
	
	printf("A media e: %.2f", media);
	
}
int main ()
{
	media();
}

