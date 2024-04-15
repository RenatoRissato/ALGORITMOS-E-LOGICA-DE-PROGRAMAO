#include <stdio.h>

int main() 
{
    // Declaração das variáveis para armazenar o volume, comprimento, largura e altura da caixa
    float volume, comprimento, largura, altura;
    
    // Solicita ao usuário que insira o comprimento da caixa e armazena o valor na variável 'comprimento'
    printf("Qual o comprimento da caixa retangular: ");
    scanf("%f", &comprimento);
    
    // Solicita ao usuário que insira a largura da caixa e armazena o valor na variável 'largura'
    printf("Qual a largura da caixa retangular: ");
    scanf("%f", &largura);
    
    // Solicita ao usuário que insira a altura da caixa e armazena o valor na variável 'altura'
    printf("Qual a altura da caixa retangular: ");
    scanf("%f", &altura);
    
    // Calcula o volume da caixa utilizando a fórmula: volume = comprimento * largura * altura
    volume = (comprimento * largura * altura);
    
    // Exibe o volume calculado da caixa retangular
    printf("O volume dessa caixa retangular é: %.2f", volume);
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

