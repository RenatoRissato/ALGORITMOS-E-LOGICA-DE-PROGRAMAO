#include <stdio.h>

int main ()
{
	int matriz[3][5]={{4,5,6,6,0},
	                {10,12,4,8,9},
	                {8,9,2,3,4,}};
	
	for(int x=0; x <= 2; x++)
	{
		for(int y=0; y<=4; y++)
		{
			printf("Matriz[%i][%i]:%i\n",x,y,matriz[x][y]);
		
		}
	}
	
}
