// 12) Fa�a um programa que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200


#include<stdio.h>

int main()
{
	int num;
	
	printf("Entre com algum valor: ");
	scanf("%i", &num);
	
	if(num >=100 && num<=200)
	{
		printf("Este numero esta entre 100 e 200");
	}
	else
	{
		printf("Este numero nao esta entre 100 e 200");
	}
	
}
