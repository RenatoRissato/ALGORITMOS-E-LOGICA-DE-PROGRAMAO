#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char nome[30];
	printf("Entre com seu nome: ");
	fgets(nome,30,stdin);
	printf("Seu nome: %s", nome);
	
}
