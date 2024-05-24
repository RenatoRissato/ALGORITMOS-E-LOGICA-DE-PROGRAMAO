
#include<stdio.h>
 
int main()
{
int numeros[5];
int segundovetor[5];

for(int i = 0 ; i <5 ; i++)
{
printf("Entre com algum numero inteiro: ");
scanf("%i", &numeros[i]);

}

for (int i = 0; i <5; i++) 
{
        if (i%2 == 0) 
{
            segundovetor[i] = 2 * numeros[i];  
        } else 
{
            segundovetor[i] = 3 * numeros[i]; 
        }
    }

for(int i=0 ; i<5 ; i++)
{   
printf("\n%i", segundovetor[i]);
    }
}

