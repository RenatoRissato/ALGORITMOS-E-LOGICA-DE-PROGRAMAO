//1. Fa�a um programa em C que mostre a tabuada de qualquer n�mero 
//escolhido pelo usu�rio (considerar tabuada do n�mero 1 ao 10). 

#include <stdio.h>

int main (){
	
	int i, numeroescolhido, resultado;

	printf("Qual a tabuada voce quer fazer: ");
	scanf("%i", &numeroescolhido);
	
	for(i=1; i<=10; i++){
	
	printf("%i x %i = %i\n", numeroescolhido, i, numeroescolhido*i);
}
}

