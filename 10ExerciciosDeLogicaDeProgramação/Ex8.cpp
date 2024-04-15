#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C

int main() // Função principal do programa
{ // Início do bloco de código da função main

    float salario_atual, salario_com_aumento; // Declaração das variáveis salario_atual e salario_com_aumento como números de ponto flutuante

    printf("Escreva o salario atual do funcionario: "); // Exibe uma mensagem solicitando ao usuário que insira o salário atual do funcionário
    scanf("%f", &salario_atual); // Lê o valor do salário atual do funcionário inserido pelo usuário e armazena-o na variável salario_atual

    salario_com_aumento = salario_atual * 1.25; // Calcula o novo salário do funcionário multiplicando o salário atual por 1.25, que representa um aumento de 25%

    printf("O salario do funcionario ficara depois do aumento de: %.2f", salario_com_aumento); // Exibe o novo salário do funcionário com duas casas decimais

    return 0; // Indica que o programa foi executado com sucesso e termina a função main

} // Fim do bloco de código da função main

