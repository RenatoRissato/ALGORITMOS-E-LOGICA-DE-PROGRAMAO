#include<stdio.h>
 
int existeNoVetor(int vetor[], int tamanho, int valor) 
{
    for (int i = 0; i < tamanho; i++) 
{
        if (vetor[i] == valor) 
{
            return 1;
        }
    }
    return 0;
}
 
int main() 
{
    int vetor1[20];
    int vetor2[20];
    int juntos[40]; 
    int tamanho = 0; 
    
    for(int i=0; i<20; i++)
    {
    	printf("Entre com os valores do vetor 1: ");
    	scanf("%i", &vetor1[i]);
}

for(int i=0; i<20; i++)
    {
    	printf("\nEntre com os valores do vetor 2: ");
    	scanf("%i", &vetor2[i]);
}


    for (int i = 0; i < 20; i++) 
{
        if (!existeNoVetor(juntos, tamanho, vetor1[i])) 
{
            juntos[tamanho] = vetor1[i];
            tamanho++;
        }
    }
 
    for (int i = 0; i < 20; i++) 
{
        if (!existeNoVetor(juntos, tamanho, vetor2[i])) 
{
            juntos[tamanho] = vetor2[i];
            tamanho++;
        }
    }
 
    printf("\nJuncao:\n");
    
    for (int i = 0; i < tamanho; i++) 
{
        printf("%i", juntos[i]);
    }
    printf("\n");
}

