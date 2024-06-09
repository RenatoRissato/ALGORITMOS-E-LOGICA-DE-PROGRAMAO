#include <stdio.h>

float calculararea(float r)
{
	float area;
	area = 3.14* (r*r);
	return(area);
	
}
int main ()
{
	float area, r;
	printf ("Qual o raio da circunferencia: ");
	scanf ("%f", &r);
	
	area = calculararea(r);
	
	printf("A area da circunferencia e: %.2f", area);
	
}
