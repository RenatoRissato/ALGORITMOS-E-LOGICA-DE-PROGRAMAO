//2. Faça um programa que calcule o IMC 15 pessoas. 
//O programa deve solicitar a altura e o peso da pessoa. 
//Para calcular o IMC utilize a fórmula (IMC = peso/(altura*altura).  
//Com base no cálculo do IMC, informe ao usuário sua situação:

#include <stdio.h>

int main ()
{
	float altura, peso, imc;
	int p;
	
	for (p=1; p<=15; p++){
	
	printf("\nPessoa %i", p);
	printf ("\nQual a sua altura: ");
	scanf("%f", &altura);
	printf("\nQual o seu peso: ");
	scanf("%f", &peso);
	
	imc = peso/(altura*altura);
	printf("Seu Imc e: %.2f", imc);
	
	if (imc <17)
	{
		printf("\nMuito abaixo do peso");
	}
	else if (imc <18.50)
	{
		printf("\nAbaixo do peso");
	}
	else if (imc <25)
	{
		printf("\nPeso normal");
	}
	else if (imc <30)
	{
		printf("\nAcima do peso");
	}
	else if (imc <35)
	{
		printf("\nObesidade 1");
	}
	else if (imc <40)
	{
	    printf("\nObesidade 2");
	}
	else 
	{
		printf("\nObesidade 3 'morbidade'");
	}

	}
}
