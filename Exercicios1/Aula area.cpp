#include<stdio.h>
int main()
{
	float area, largura, comprimento;
	printf("Entre com a largura: ");
	scanf("%f", &largura);
	printf("Entre com o comprimento:");
	scanf("%f", &comprimento);
	area = largura * comprimento;
	printf("A area do terreno: %f", area);
		
}
