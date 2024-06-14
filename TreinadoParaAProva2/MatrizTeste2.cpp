//2. Monte uma matriz 3X3 de números inteiros, positivos ou negativos, 
//somando a quantidade de positivos e a quantidade de negativos. 
//Ao término mostre a quantidade de positivos e negativos.

#include <stdio.h>

int main (){
	
	float matriz[3][3];
	int l,c;
	int positivo, negativo;
	
	for(l=0; l<3; l++){
		
		for(c=0; c<3; c++){
			
			printf("Quais sao os valores da matriz[%i][%i]: ",l,c);
			scanf("%f", &matriz[l][c]);
			
			if(matriz[l][c]>0){
				positivo++;
				
			}
			else if(matriz[l][c]<0){
				negativo++;
			}
		}
		
	}
	
printf("O numero de positivos na matriz e: %i\n", positivo);	
printf("O numero de negativos na matriz e: %i", negativo);	

}
