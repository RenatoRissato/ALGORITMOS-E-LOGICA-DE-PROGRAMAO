#include <stdio.h>

int main() 
{
    // Declara��o das vari�veis para armazenar o volume, comprimento, largura e altura da caixa
    float volume, comprimento, largura, altura;
    
    // Solicita ao usu�rio que insira o comprimento da caixa e armazena o valor na vari�vel 'comprimento'
    printf("Qual o comprimento da caixa retangular: ");
    scanf("%f", &comprimento);
    
    // Solicita ao usu�rio que insira a largura da caixa e armazena o valor na vari�vel 'largura'
    printf("Qual a largura da caixa retangular: ");
    scanf("%f", &largura);
    
    // Solicita ao usu�rio que insira a altura da caixa e armazena o valor na vari�vel 'altura'
    printf("Qual a altura da caixa retangular: ");
    scanf("%f", &altura);
    
    // Calcula o volume da caixa utilizando a f�rmula: volume = comprimento * largura * altura
    volume = (comprimento * largura * altura);
    
    // Exibe o volume calculado da caixa retangular
    printf("O volume dessa caixa retangular �: %.2f", volume);
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

