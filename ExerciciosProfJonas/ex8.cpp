// 8) Elaborar um programa que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$).
// O programa em C deverá solicitar o valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário.

#include <stdio.h>

int main(){
	
	float cotacao,dolar,real;
	printf("Quantos dolares voce tem disponivel: ");
	scanf("%f", &dolar);
	printf("Qual a cotação do dolar no dia de hoje: ");
	scanf("%f", &cotacao);	
	
	real = dolar*cotacao;
	
	printf("O valor convetido em real é de: %.2f ", real);


}

