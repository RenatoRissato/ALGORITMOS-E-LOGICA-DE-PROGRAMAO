//1. Faça um programa em C que mostre a tabuada de qualquer número 
//escolhido pelo usuário (considerar tabuada do número 1 ao 10). 

#include <stdio.h>

int main (){
	
	int i, numeroescolhido, resultado;

	printf("Qual a tabuada voce quer fazer: ");
	scanf("%i", &numeroescolhido);
	
	for(i=1; i<=10; i++){
	
	printf("%i x %i = %i\n", numeroescolhido, i, numeroescolhido*i);
}
}

