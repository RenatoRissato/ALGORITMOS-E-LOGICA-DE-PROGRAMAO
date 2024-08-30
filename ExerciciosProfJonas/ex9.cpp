//9) Faça um programa que receba um valor que foi depositado e exiba o valor com rendimento após um mês. 
//Considere fixo o juro da poupança em 0,70% a.m.

#include <stdio.h>

int main(){
	
	float valor,juros=0.0070;
	
	printf("Qual o valor que foi depositado: ");
	scanf("%f", &valor);
			
	printf("O valor com rendimento de um mes na poupanca é de: %.2f", valor+valor*juros );
	
}
