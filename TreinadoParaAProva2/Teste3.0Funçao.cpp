//3) Fa�a um programa que apresente fun��o para calcular a �rea de uma circunfer�ncia. 
//A fun��o deve calcular a �rea e realizar o retorno para a fun��o principal. Area = 3.14*(R*R).


#include <stdio.h>

float calculararea(float raio){
	
	float area;
	area = 3.14*(raio*raio);
	return(area);
}

int main(){
	
	float raio, area;
	printf("Qual o raio da cricunferencia: ");
	scanf("%f", &raio);
	area = calculararea(raio);
	printf("A area da circunferencia e: %f", area);
		
}
