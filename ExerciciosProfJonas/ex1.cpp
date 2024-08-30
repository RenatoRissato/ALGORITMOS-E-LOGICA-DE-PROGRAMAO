// 1) Faça um programa que receba 2 valores e retorne a soma, subtração, multiplicação e divisão dos valores informados.

#include<stdio.h>

int main()
{
	float x,y, soma, subtracao, multiplicacao, divisao;
	
	printf("Entre com um valor: ");
	scanf("%f", &x);
	
	printf("Entre com um valor: ");
	scanf("f", &y);
	
	soma = x+y;
	subtracao = x-y;
	multiplicacao = x*y;
	divisao= x/y;
	
	printf("Soma: %.2f\n", soma);
	printf("Subtracao: %.2\n", subtracao);
	printf("multiplicacao: %.2f\n", multiplicacao);
	printf("divisao: %.2f\n", divisao);
}
