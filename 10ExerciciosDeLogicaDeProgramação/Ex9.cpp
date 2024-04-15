#include <stdio.h>

int main ()
{	
	int ano_nascimento, ano_atual, idade_anos, idade_meses, idade_semanas, idade_dias;
	
	printf ("Em que ano estamos: "),
	scanf ("%i", &ano_atual);
	printf ("\nEm que ano voce nasceu: ");
	scanf ("%i", &ano_nascimento);
	
	idade_anos = (ano_atual - ano_nascimento);
	printf ("\nSua idade e: %i", idade_anos);
	
	idade_meses = (idade_anos * 12);
	printf ("\nSua idade em meses e: %i", idade_meses);
	
	idade_dias = (idade_anos * 365);
	printf ("\nSua idade em dias e: %i", idade_dias);
	
	idade_semanas = (idade_dias /7);
	printf ("\nSua idade em semanas e: %i", idade_semanas);
	

	return 0;
		
}
