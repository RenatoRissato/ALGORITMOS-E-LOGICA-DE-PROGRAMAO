// 8) Elaborar um programa que efetue a apresenta��o do valor da convers�o em real (R$) de um valor lido em d�lar (US$).
// O programa em C dever� solicitar o valor da cota��o do d�lar e tamb�m a quantidade de d�lares dispon�veis com o usu�rio.

#include <stdio.h>

int main(){
	
	float cotacao,dolar,real;
	printf("Quantos dolares voce tem disponivel: ");
	scanf("%f", &dolar);
	printf("Qual a cota��o do dolar no dia de hoje: ");
	scanf("%f", &cotacao);	
	
	real = dolar*cotacao;
	
	printf("O valor convetido em real � de: %.2f ", real);


}

