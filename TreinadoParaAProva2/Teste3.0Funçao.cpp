//3) Faça um programa que apresente função para calcular a área de uma circunferência. 
//A função deve calcular a área e realizar o retorno para a função principal. Area = 3.14*(R*R).


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
