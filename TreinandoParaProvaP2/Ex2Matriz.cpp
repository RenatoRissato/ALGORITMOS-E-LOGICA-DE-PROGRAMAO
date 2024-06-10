//2. Monte uma matriz 3X3 de números inteiros, positivos ou negativos, 
//somando a quantidade de positivos e a quantidade de negativos. 
//Ao término mostre a quantidade de positivos e negativos.

#include <stdio.h>

int main (){
	
	int matriz [3][3];
	int l,c;
	int positivo =0, negativo =0;
	
	for(l=0; l<=2; l++)
	{
		for(c=0; c<=2;c++){
		
		{
		printf("Digite o valor na matriz [%i][%i]: ", l,c);
		scanf("%i", &matriz [l][c]);
	    }
	    
	    if(matriz [l][c]> 0)
	    {
	    	positivo++;
		}
	    else if(matriz [l][c]<0)
		{
			negativo++;
		}   
	}	
}
    printf("Quantidade de valores positivos: %i\n", positivo);
    printf("Quantidade de valores negativos: %i\n", negativo);

}
