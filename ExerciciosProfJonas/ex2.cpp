// 2) Escreva um programa para determinar o consumo m�dio de um autom�vel sendo fornecida a 
// dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto.

#include <stdio.h>

int main()
{
	float distancia, totalcombustivel, consumomedio;
	
	printf("Qual a distancia total que voce percorreu: ");
	scanf("%f", &distancia);
	
	printf("Qual o total de combustivel gasto: ");
	scanf("%f", &totalcombustivel);
	
	consumomedio = totalcombustivel/distancia;
	
	printf("O consumo medio do automovel devido a distancia %.2f e de: %.2f",distancia,consumomedio);
	
	
}
