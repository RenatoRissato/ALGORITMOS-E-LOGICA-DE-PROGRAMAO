//9) Fa�a um programa que receba um valor que foi depositado e exiba o valor com rendimento ap�s um m�s. 
//Considere fixo o juro da poupan�a em 0,70% a.m.

#include <stdio.h>

int main(){
	
	float valor,juros=0.0070;
	
	printf("Qual o valor que foi depositado: ");
	scanf("%f", &valor);
			
	printf("O valor com rendimento de um mes na poupanca � de: %.2f", valor+valor*juros );
	
}
