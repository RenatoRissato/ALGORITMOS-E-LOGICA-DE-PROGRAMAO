// 3) Escreva um programa em C para ler dois valores para as vari�veis A e B, 
// e efetuar as trocas dos valores de forma que a vari�vel A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o 
// valor da vari�vel A. Apresentar os valores trocados.

#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("Entre com algum valor para a: ");
	scanf("%i", &a);
	
	printf("Entre com algum valor para b: ");
	scanf("%i", &b);
	
	c=a;
	d=b;
	a=d;
	b=c;
	
	printf("O valor de a: %i\n", a);
	printf("O valor de b: %i\n", b);
}
