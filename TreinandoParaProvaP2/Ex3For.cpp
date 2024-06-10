//3. Faça um programa em C que calcula o salário final de 20 funcionários.
//Serão atribuídos bônus ao salário do funcionário de acordo com pontuações atingidas, de acordo com a tabela abaixo:
//O usuário deverá informar o salário do funcionário e a quantidade de pontos que ele obteve. 
//Desta forma o programa deverá calcular o salário final baseado no bônus 

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
			printf("\nOperação Invalida");
		}	
	}
	
}
