//6. Faça um programa que imprima a quantidade de números pares de 1 a 30.

#include <stdio.h>

int main() {
    int i;
    int count = 0; // Variável para contar números pares

    for (i = 1; i <= 30; i++) {
        if (i % 2 == 0) { // Verifica se o número é par
            count++;
        }
    }

    printf("A quantidade de numeros pares de 1 a 30 e %d\n", count);

}
	
