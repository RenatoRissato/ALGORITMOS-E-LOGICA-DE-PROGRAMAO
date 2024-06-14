//1) Faça um programa em C que calcule a media de um aluno. Utilize uma função média:
//void media()

#include <stdio.h>
	
	void media(){
		
		float n1, n2, soma;
		printf("Qual a n1 do aluno: ");
		scanf("%f", &n1);
		printf("Qual a n2 do aluno: ");
		scanf("%f", &n2);
		soma = (n1+n2)/2;
		printf("A media e: %f", soma);
		
	}
	
	int main(){
		media();
	}
	
	
	
