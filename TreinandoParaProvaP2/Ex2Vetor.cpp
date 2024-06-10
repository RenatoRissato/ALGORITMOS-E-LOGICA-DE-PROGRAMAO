//2. Faça um programa em C que leia 10 elementos, 
//armazene em um vetor, determine a média dos elementos, 
//o maior e o menor elemento do vetor.

#include <stdio.h>

int main ()
{
	float elemento[10];
	int i;
	float soma = 0.0, mediageral;
	float maior, menor;
	
	for(i=0; i<=9; i++){
		
		printf("Digite um valor: ");
		scanf("%f", &elemento[i]);	
	}
	for(i=0; i<=9; i++){
		
		soma+= elemento[i];
		
		if(elemento[i]> maior)
		{
			maior = elemento[i];
		}
		if (elemento[i]< menor)
		{
			menor = elemento[i];
		}
	}
	
	mediageral = soma/=10;
	printf("Sua media geral dos 10 elementos e: %.2f", mediageral);
	printf("O maior elemento e: %.2f", maior);
	printf("O menor elemento e: %.2f", menor);	
}
