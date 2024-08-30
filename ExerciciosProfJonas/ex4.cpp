#include <stdio.h>
#include <math.h>  

int main()
{
    int vetor[10];
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &vetor[i]);
        
        int cubo = (int)pow(vetor[i], 3);
        
        printf("Cubo desse valor: %i\n", cubo);
    }

    return 0;
}

