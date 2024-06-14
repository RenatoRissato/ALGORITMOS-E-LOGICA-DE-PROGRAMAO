//4. Faça um programa em C (com a estrutura do...while) que leia 20 valores inteiros e: 
//- Encontre e mostre o maior valor; 
//- Encontre e mostre o menor valor; 
//- Calcule e mostre a média dos números lidos;
#include <stdio.h>

int main (){
	
	int maior, menor, valor, i;
	float media, soma=0.0;
	
	
	do {
		
		printf("Digite um valor: ");
		scanf("%i", &valor);
		
		if(valor > maior){
			maior = valor;
		}
		if (valor < menor){
			menor = valor;
		}
		
		soma += valor;
		i++;
	}while (i<20);
	
	media = soma/20;
	
	printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %2f\n", media);
	
	
		
}

