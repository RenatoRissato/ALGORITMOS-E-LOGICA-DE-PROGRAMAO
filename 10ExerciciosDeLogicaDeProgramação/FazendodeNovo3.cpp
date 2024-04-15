#include <stdio.h>

int main()
{
	float litros, preco; 
	char combustivel;
	
	printf ("Qual tipo de cobustivel voce quer (G ou A): ");
	scanf ("%c", &combustivel);
	
	printf ("Quantos litros de combustivel: ");
	scanf ("%f", &litros);
	
	if ((combustivel == 'a' || combustivel == 'A') && litros <= 20)
	{
		
		preco = litros * (3.39 * 0.97);
		
	}
	
	else if ((combustivel == 'a' || combustivel == 'A') && litros > 20)
	{
		
		preco = litros * (3.39 * 0.95);
		
	}
	
	else if ((combustivel == 'g' || combustivel == 'G') && litros <= 20)
	{
		
		preco = litros * (5.39 * 0.96);
		
	}
	else if ((combustivel == 'g' || combustivel == 'G') && litros > 20)
	{
		
		preco = litros * (5.39 * 0.94);
		
	}
	else 
	{
		printf("Tipo de combustivel invalido.\n");
		
		return 1;
	}
	
	printf("\nO valor total que voce ira pagar: %.2f", preco);
	
	return 0;
}


