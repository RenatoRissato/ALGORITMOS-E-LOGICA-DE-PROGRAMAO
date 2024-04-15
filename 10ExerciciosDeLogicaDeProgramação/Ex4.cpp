#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da

int main() { // Fun��o principal do programa
	
    float c, f; // Declara��o das vari�veis para a temperatura em Celsius (g) e Fahrenheit (f)
	
    // Solicita ao usu�rio a temperatura em graus Celsius
    printf("Qual a temperatura em graus Celsius que voce queira converter para graus Fahrenheit: ");
    scanf("%f", &c); // L� a temperatura em Celsius fornecida pelo usu�rio e armazena em 'c'

    // Converte a temperatura de Celsius para Fahrenheit
    f = c * 1.8 + 32;

    // Exibe a temperatura convertida em Fahrenheit
    printf("Sua temperatura em Fahrenheit e: %f\n", f); 

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
} 

