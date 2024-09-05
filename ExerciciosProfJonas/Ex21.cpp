//21) Escrever um algoritmo que leia um valor para uma variável n.
//Em seguida, calcule a tabuada de 1 a 10 para n. Mostre a tabuada um valor por linha.

#include <stdio.h>

int main(){
		
		float n;
		
		printf("Escreva um valor para n: ");
		scanf("%f", &n);
		
		for(int i = 1; i<=10; i++){

		printf("%i x %.2f = %.2f\n", i, n, i*n);	
		}
	
	}

