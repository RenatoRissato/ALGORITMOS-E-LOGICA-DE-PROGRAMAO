//4) Fa�a um programa que apresente fun��o para calcular o IMC. 
//A fun��o deve retornar o IMC calculado para a fun��o principal.
//IMC = peso/(altura*altura);

#include <stdio.h>

float calcularimc(float peso, float altura){
	
	float imc;
	imc = peso/(altura*altura);
	return (imc);
}

int main(){
	
	float peso, altura, resultado;
	printf("Escreva o seu peso: ");
	scanf("%f", &peso);
	printf("Escreva o sua altura: ");
	scanf("%f", &altura);
	
	resultado = calcularimc(peso,altura);
	
	printf("Seu IMC e: %.2f", resultado);
	
}
