//3) Faça um programa que apresente função para calcular a área de uma circunferência. 
//A função deve calcular a área e realizar o retorno para a função principal. Area = 3.14*(R*R).

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
