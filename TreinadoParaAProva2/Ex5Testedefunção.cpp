//5) Faça um programa para calcular salário do funcionário. 
//A função deve retornar o salário para a função principal.
//      Salario = (hora * valorhora)*dias;

#include <stdio.h>

float calcularsalario(float hora, float valorhora, int dias){
	
	float resultado;
	resultado = (hora * valorhora)*dias;
	return(resultado);
}

int main (){
	
	float hora, valorhora, resultado;
	int dias;
	
	printf("Quantas horas vc trabalhou: ");
	scanf("%f",&hora);
	printf("Qual o valor da sua hora: ");
	scanf("%f",&valorhora);
	printf("Quantos dias voce trabalhou: ");
	scanf("%i",&dias);
	
	resultado = calcularsalario(hora, valorhora, dias);
	
	printf("O salario do funcionario e: %f", resultado);
}
