//5) Fa�a um programa para calcular sal�rio do funcion�rio. 
//A fun��o deve retornar o sal�rio para a fun��o principal.
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
