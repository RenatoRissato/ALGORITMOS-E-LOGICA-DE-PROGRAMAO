// 7) Escreva um programa em C que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). 
// Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o seu nome, o sal�rio fixo e sal�rio no final do m�s.


#include<stdio.h>

int main()
{
	char nomevendedor[50];
	float salariofixo, salariofinal, comissao, totalvendas;
	
	printf("Insira o Nome do Vendedor(apenas letras): ");
	scanf("%s", &nomevendedor);
	
	printf("Insira o Salario Fixo do Vendedor: ");
	scanf("%f", &salariofixo);
	
	printf("Insira o total de vendas do vendedor em reais: ");
	scanf("%f", &totalvendas);
	
	comissao = totalvendas *0.15;
	salariofinal = salariofixo + comissao;
	
	printf("Nome do Vendedor: %s\n", nomevendedor);
	printf("Salario Fixo do Vendedor: $%.2f\n", salariofixo);
	printf("Salario Final: $%.2f\n", salariofinal);
}
