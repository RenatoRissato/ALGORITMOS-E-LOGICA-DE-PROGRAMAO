// 2) Escreva um programa para determinar o consumo médio de um automóvel sendo fornecida a 
// distância total percorrida pelo automóvel e o total de combustível gasto.

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
