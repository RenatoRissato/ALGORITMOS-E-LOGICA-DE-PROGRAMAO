#include <stdio.h>

int main (){
	
	float mediafinal, nota1, nota2, nota3;
	
	printf("Escreva a nota1: ");
	scanf(" %f", &nota1);
	printf("Escreva a nota2: ");
	scanf(" %f", &nota1);
	printf("Escreva a nota3: ");
	scanf(" %f", &nota1);
	
	mediafinal = (nota1*2 + nota2*3 + nota3*5)/10;
	printf("Sua media final e: %f", mediafinal);

	return 0;
}
