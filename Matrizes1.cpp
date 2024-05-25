#include <stdio.h>

int main ()
{
	int matriz[3][5];
	
	for(int x=0; x <= 2; x++)
	{
		for(int y=0; y<=4; y++)
		{
			printf("Entre com valor: ");
			scanf("%i", &matriz[x][y]);
		}
	}
	
	for(int x=0; x <= 2; x++)
	{
		for(int y=0; y<=4; y++)
		{
			printf("Matriz[%i][%i]:%i\n",x,y,matriz[x][y]);
		
		}
	}
	
}
