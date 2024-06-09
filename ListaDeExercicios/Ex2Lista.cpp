#include <stdio.h>

int main ()
{
	float salario [200];
	int filhos [200];
	int i;
	float somasalario = 0.0; 
	int somafilhos = 0;
	float maiorsalario = 0.0;
	float mediasalario = 0.0;
	float mediafilhos = 0.0;
	
	for (i=0;i<200;i++)
	{
		printf("Pessoa %i:\n", i + 1);
		printf("Qual o seu salario: ");
		scanf("%f", &salario[i]);
		
		printf("Qual o numero de filhos que voce tem: ");
		scanf("%i", &filhos[i]);
		
		somasalario += salario [i];
		somafilhos += filhos[i];
		
		if (salario [i] > maiorsalario)
		{
			maiorsalario = salario[i];
		}
	}
	
	mediasalario = somasalario/200;
	mediafilhos = somafilhos/200;
	
	printf("Media do salario: %.2f\n", mediasalario);
	printf("Media do numero de filhos: %.2f\n", mediafilhos);
	printf("Maior salario: %.2f", maiorsalario);
	
	
}
