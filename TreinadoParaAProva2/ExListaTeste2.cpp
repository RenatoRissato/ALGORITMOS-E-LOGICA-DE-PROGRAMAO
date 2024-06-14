//2. A prefeitura de uma cidade fez uma pesquisa com 200 pessoas, 
//coletando dados sobre o salário e o número de filhos. 
//A prefeitura deseja saber: o A média do salário dessas pessoas o 
//A média do número de filhos o O maior salário

#include <stdio.h>

int main(){
	float salario,maiorsalario = 0.0, mediasalario, mediageralsalario = 0.0;
		int i, filhos, mediafilhos, mediageralfilhos = 0;

	for(i=1; i<=5; i++){
		printf("Qual e o seu salario: ");
		scanf("%f", &salario);
		printf("Quantos filhos voce tem: ");
		scanf("%i", &filhos);
		
		mediageralsalario += salario;
		
		mediageralfilhos += filhos;
		
		if(salario> maiorsalario){
			maiorsalario = salario;
		}
	}
	
	mediasalario = mediageralsalario/5;
	mediafilhos = mediageralfilhos/5;
	printf ("A media do salario dessas pessoas e: %f",mediasalario);
	
	printf ("A media do numero de filhos dessas pessoas e: %i",mediafilhos);
	
	    printf("O maior salário é: %.2f\n", maiorsalario);
	
	
}
