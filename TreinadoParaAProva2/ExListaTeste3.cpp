//3. A s�rie de Fibonacci � formada pela seguinte sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc. 
//Escreva um algoritmo que gere a s�rie de Fibonacci at� o vig�simo termo.

#include <stdio.h>

int main (){
	
	int i, fib[20];
	
	fib[0] = 1;
	fib[1] = 1;
	
	printf("%i %i\n", fib[0], fib[1]);
	
	for(i = 2; i<=19; i++){
		
	fib[i] = fib[i-1]+ fib[i-2];
	
	printf("%i\n", fib[i]);
		
		
	}
		
	
}
