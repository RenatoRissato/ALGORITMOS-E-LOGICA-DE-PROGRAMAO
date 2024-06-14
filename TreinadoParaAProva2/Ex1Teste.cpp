//Faça um programa em C que calcule a media de um aluno. Utilize uma função média:
//void media()
#include <stdio.h>
	
	void media (){
		
		float n1, n2, media;
		printf("Entre com valor de n1: ");
		scanf("%f",&n1);
		printf("Entre com valor de n2: ");
		scanf("%f",&n2);
		media = (n1+n2)/2;
		
		printf("A media e: %f", media);
		
	}
	
	int main (){
		
		media();
		
	}
