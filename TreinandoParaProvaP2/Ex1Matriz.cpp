//Monte um programa que guarde 10 valores em um vetor, 
//apresente ele na ordem informada e depois na ordem inversa.

#include <stdio.h>

int main ()
{
	int vetor[10];
	int i;
	
	for(i=0; i<=9; i++){
		
		printf("Escreva um valor no vetor %i: ", i);
		scanf("%i", &vetor[i]);
		
	}
	for(i=0; i<=9; i++){
		
		printf("Os valor do vetor %i e: %i\n", i, vetor[i]);

	}	
	for(i=9; i >=0; i--){
		printf("\nOs valor do vetor %i e: %i\n", i, vetor[i]);
		
	}
}
