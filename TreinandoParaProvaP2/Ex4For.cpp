//4. Faça o programa de cálculo das médias para 10 alunos. 
//Apresente as médias individuais e a média geral da sala.

#include <stdio.h>

int main ()
{
	float n1, n2, media, mediageral;
	int a;
	
	for (a=1; a<=10; a++){
		
		printf("\nAluno %i", a);
		printf("\nQual a nota1: ");
		scanf("%f", &n1);
		printf("Qual a nota2: ");
		scanf("%f", &n2);
		
		
		media = (n1+n2)/2;
		printf("\nO aluno %i tem media: %.2f", a, media);
		
		mediageral += media; // Acumula as médias individuais

	}
	
	mediageral /= 10; // Calcula a média geral da sala
	printf("\nA media geral da sala e: %.2f", mediageral);
	
}
