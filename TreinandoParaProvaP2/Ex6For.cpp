//6. Fa�a um programa que imprima a quantidade de n�meros pares de 1 a 30.

#include <stdio.h>

int main() {
    int i;
    int count = 0; // Vari�vel para contar n�meros pares

    for (i = 1; i <= 30; i++) {
        if (i % 2 == 0) { // Verifica se o n�mero � par
            count++;
        }
    }

    printf("A quantidade de numeros pares de 1 a 30 e %d\n", count);

}
	
