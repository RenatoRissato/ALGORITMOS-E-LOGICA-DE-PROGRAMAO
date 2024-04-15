#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal do programa
	
    float c, f; // Declaração das variáveis para a temperatura em Celsius (g) e Fahrenheit (f)
	
    // Solicita ao usuário a temperatura em graus Celsius
    printf("Qual a temperatura em graus Celsius que voce queira converter para graus Fahrenheit: ");
    scanf("%f", &c); // Lê a temperatura em Celsius fornecida pelo usuário e armazena em 'c'

    // Converte a temperatura de Celsius para Fahrenheit
    f = c * 1.8 + 32;

    // Exibe a temperatura convertida em Fahrenheit
    printf("Sua temperatura em Fahrenheit e: %f\n", f); 

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
} 

