//3) Fa�a um programa que apresente fun��o para calcular a �rea de uma circunfer�ncia. 
//A fun��o deve calcular a �rea e realizar o retorno para a fun��o principal. Area = 3.14*(R*R).

#include <stdio.h>

float calculararea(float r){
	
	float area;
	area = 3.14*(r*r);
	return (area);
	
}

int main(){
	
	float area, r;
	
	printf("Qual o raio da area: ");
	scanf("%f", &r);
	area = calculararea(r);
	
	printf("A area da circunferencia e: %f", area);
	
}
