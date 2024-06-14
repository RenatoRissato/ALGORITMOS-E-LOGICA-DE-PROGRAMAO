//5. Crie um programa em C que leia um vetor de 30 números inteiros e gere um segundo vetor 
//cujas posições pares são o dobro do vetor original e as ímpares o triplo.

#include <stdio.h>

int main (){
	
	int vetor[30];
	int vetorb[30];
	int i;
	
	for(i=0; i<=30; i++){
		
		printf("Escreva o seu numero inteiro: ");
		scanf("%i", &vetor[i]);
	
	}
	
	for(i=0; i<=30; i++){
		
	if (vetor[i] % 2 == 0){
		
		vetorb[i]= vetor[i]*2;
	}
	else{
		
		vetorb[i]= vetor[i]*3;
	}
	printf("%i\n", vetorb[i]);	
}
	
}
