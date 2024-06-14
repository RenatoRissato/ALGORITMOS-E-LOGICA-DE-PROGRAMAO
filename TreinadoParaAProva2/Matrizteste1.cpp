//Monte um programa que guarde 10 valores em um vetor, apresente ele na ordem informada e depois na ordem inversa.

#include <stdio.h>

int main(){
	
	int vetor[10];
	int i;
	
	for(i=0; i<10; i++){
		
		printf("Escreva o valor do vetor %i: ",i+1);
		scanf("%i", &vetor[i]);
				
	}
	for(i=0; i<10; i++){
			printf("O valor do vetor %i e: %i\n", i+1, vetor[i]);
}

    for(i=9; i>=0; i--){
			printf("O valor do vetor %i e: %i\n", i+1, vetor[i]);
}
return 0;
}
