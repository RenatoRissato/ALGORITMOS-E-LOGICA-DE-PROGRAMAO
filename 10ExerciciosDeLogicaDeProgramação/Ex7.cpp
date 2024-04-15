#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int numero_conta_corrente; // Variável para armazenar o número da conta corrente
    float saldo, debito, credito, saldo_atual; // Variáveis para armazenar o saldo, débito, crédito e saldo atual

    // Solicita ao usuário que insira o número da conta corrente
    printf("\nEscreva o seu numero da sua conta corrente: ");
    scanf("%i", &numero_conta_corrente); // Lê o número da conta corrente inserido pelo usuário

    // Solicita ao usuário que insira o saldo da conta
    printf("\nO seu saldo e: ");
    scanf("%f", &saldo); // Lê o saldo inserido pelo usuário

    // Solicita ao usuário que insira o débito
    printf("\nVoce tem um debito para descontar de: ");
    scanf("%f", &debito); // Lê o débito inserido pelo usuário

    // Solicita ao usuário que insira o crédito
    printf("\nVoce tem um credito para adicionar de: ");
    scanf("%f", &credito); // Lê o crédito inserido pelo usuário

    // Calcula o saldo atual subtraindo o débito e adicionando o crédito ao saldo inicial
    saldo_atual = (saldo - debito + credito);

    // Exibe o saldo atual com duas casas decimais
    printf("\nSeu saldo atual e de: %.2f", saldo_atual);

    // Verifica se o saldo atual é positivo ou negativo e exibe a mensagem correspondente
    if (saldo_atual >= 0)
    {
        printf("\nSaldo Positivo\n");
    }
    else
    {
        printf("\nSaldo Negativo\n");
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

