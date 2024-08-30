// 5) Escreva um programa que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
// A fórmula de conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius


#include<stdio.h>

int main()
{
	float tempC, tempF, conversaoCelsiusFahrenheit;
	printf("Entre com a temperatura em Celsius : ");
	scanf("%f", &tempC);
	
	tempF = (9*tempC+160)/5;
	
	printf("Conversao de Celsius para Fahrenheit: %.2f", tempF);
	

}
