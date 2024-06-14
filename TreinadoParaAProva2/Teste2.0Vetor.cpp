//2. Faça um programa em C que leia 10 elementos, 
//armazene em um vetor, determine a média dos elementos,
//o maior e o menor elemento do vetor.
 
 #include <stdio.h>
 
 int main(){
 	
 	int elemento[10];
 	int i, maior=0, menor=0, soma;
 	float media;
 	
 	for(i=0; i<10; i++){
 		
 		printf("Escreva um elemento no vetor[%i]: ", i+1);
 		scanf("%i", &elemento[i]);
 		
 		if(i==0){
 			maior = menor = elemento[i];
		 }
 		
 		if(elemento[i]>maior){
 			maior = elemento[i];
		 }
 		if(elemento[i]<menor){
 			menor = elemento[i];
		 }
 		soma += elemento[i];
 	
	 }
 	media = soma/10;
 	printf("A media dos elementos e: %f\n", media);
 	printf("O maior elemento e: %i\n", maior);
 	printf("O menor elemento e: %i", menor);
 	
 }
 

