#include <stdio.h>
void somar()
{
	float x, y;
	printf("Entre com x: ");
	scanf("%f", &x);
	printf("Entre com y: ");
	scanf("%f", &y);
	printf("Soma: %f", x+y);
}
int main ()
{
	somar();
}
