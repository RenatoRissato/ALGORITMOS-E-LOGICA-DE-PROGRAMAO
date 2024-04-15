#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da em C

int main() // Fun��o principal do programa
{ // In�cio do bloco de c�digo da fun��o main

    float salario_atual, salario_com_aumento; // Declara��o das vari�veis salario_atual e salario_com_aumento como n�meros de ponto flutuante

    printf("Escreva o salario atual do funcionario: "); // Exibe uma mensagem solicitando ao usu�rio que insira o sal�rio atual do funcion�rio
    scanf("%f", &salario_atual); // L� o valor do sal�rio atual do funcion�rio inserido pelo usu�rio e armazena-o na vari�vel salario_atual

    salario_com_aumento = salario_atual * 1.25; // Calcula o novo sal�rio do funcion�rio multiplicando o sal�rio atual por 1.25, que representa um aumento de 25%

    printf("O salario do funcionario ficara depois do aumento de: %.2f", salario_com_aumento); // Exibe o novo sal�rio do funcion�rio com duas casas decimais

    return 0; // Indica que o programa foi executado com sucesso e termina a fun��o main

} // Fim do bloco de c�digo da fun��o main

