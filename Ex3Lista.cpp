#include <stdio.h>

int main()
{
	int fibonacci[20];
	int x, y, z;
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	
	printf("%i", fibonacci[0]);
	printf("\n%i", fibonacci[1]);
	for(int i = 2; i <= 19; i++)
	{
		x = i-1;
		y = i-2;
		z = fibonacci[x] + fibonacci[y];
		fibonacci[i] = z;
		printf("\n%i", fibonacci[i]);
	}
}

