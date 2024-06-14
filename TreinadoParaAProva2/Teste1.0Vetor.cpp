//1. Faça um programa que leia dois vetores:
//int vetorA[5];
//int vetorB[5];
//Após a leitura dos vetores, armazena em um terceiro vetor a soma dos valores por índice.
//int vetorC[5];

#include <stdio.h>

int main(){
	
	int vetorA[5];
	int vetorB[5];
	int vetorC[5];
	int i;
	
	for(i=0; i<5; i++){
		
		printf("Escreva o valor do vetor A: ");
		scanf("%i", &vetorA[i]);
		
	}
		for(i=0; i<5; i++){
		
		printf("Escreva o valor do vetor B: ");
		scanf("%i", &vetorB[i]);
		
	}
		for(i=0; i<5; i++){
		
		vetorC[i]= vetorA[i] + vetorB[i];
		
		printf("O vetor c e: %i\n", vetorC[i]);
	    
	}
	
}
