//2) Fa�a um programa em C que apresente fun��es para as quatro opera��es:
//Somar, Subtrair, Multiplicar e Dividir.

#include <stdio.h> 

float somar (float x, float n){
	
	float resultado;
	resultado = x+n;
	return(resultado);	
}
float subtrair (float x, float n){
	
	float resultado;
	resultado = x-n;
	return(resultado);	
}
float multiplicar (float x, float n){
	
	float resultado;
	resultado = x*n;
	return(resultado);	
}
float dividir (float x, float n){
	
	float resultado;
	resultado = x/n;
	return(resultado);	
}

int main(){
	
	float soma, sub, mult, div, x, n;
		printf("Qual o valor de x: ");
		scanf("%f", &x);
			printf("Qual o valor de n: ");
		scanf("%f", &n);
			soma = somar(x,n);
	printf("O valor da soma e: %f", soma);
	
			sub = subtrair(x,n);
	printf("O valor da subtrair e: %f", sub);
		
					mult = multiplicar(x,n);
	printf("O valor da multiplicar e: %f", mult);
				
				div = dividir(x,n);
	printf("O valor da dividir e: %f", div);
}
