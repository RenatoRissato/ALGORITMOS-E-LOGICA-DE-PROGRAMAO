//3. Fa�a um programa em C que calcula o sal�rio final de 20 funcion�rios.
//Ser�o atribu�dos b�nus ao sal�rio do funcion�rio de acordo com pontua��es atingidas, de acordo com a tabela abaixo:
//O usu�rio dever� informar o sal�rio do funcion�rio e a quantidade de pontos que ele obteve. 
//Desta forma o programa dever� calcular o sal�rio final baseado no b�nus 

#include <stdio.h>

int main ()
{
	float salario, pontos, salariofinal;
	int f;
	
	for (f=1; f<=20; f++){
		
		printf("\nFuncionario %i", f);
		printf("\nQual o seu salario: ");
		scanf("%f", &salario);
		printf("Qual a quantidade de pontos: ");
		scanf("%f", &pontos);
		
		if(pontos >=1000)
		{
			salariofinal = salario + 500.00;
			printf("\nSeu salario final e: %.2f", salariofinal);
		}
		else if (pontos >=500 && pontos <=999)
		{
			salariofinal = salario + 300.00;
			printf("\nSeu salario final e: %.2f", salariofinal);	
		}
		else if (pontos >=100 && pontos <=499)
		{
			salariofinal = salario + 100.00;
			printf("\nSeu salario final e: %.2f", salariofinal);	
		}
		else if (pontos >=1 && pontos <=99)
		{
			salariofinal = salario + 25.00;
			printf("\nSeu salario final e: %.2f", salariofinal);		
		}
		else 
		{
			printf("\nOpera��o Invalida");
		}	
	}
	
}
