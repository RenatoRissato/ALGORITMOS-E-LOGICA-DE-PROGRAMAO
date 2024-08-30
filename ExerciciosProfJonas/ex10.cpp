//10) Faça um programa que receba o preço de custo de um produto e mostre o valor de venda.
// Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.


#include <stdio.h>

int main() 
{
    float precodecusto, acrescimo, valordevenda;
    
    printf("Digite o preco de custo do produto: ");
    scanf("%f", &precodecusto);
    
    printf("Digite o percentual de acrescimo (em percentagem): ");
    scanf("%f", &acrescimo);
    
    valordevenda = precodecusto * (1 + acrescimo / 100);

    printf("O valor de venda do produto: R$ %.2f\n", valordevenda);
    
}

