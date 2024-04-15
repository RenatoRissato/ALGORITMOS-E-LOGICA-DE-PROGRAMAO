#include <stdio.h>

int main()
{
    // Declara��o das vari�veis
    int numero_conta_corrente; // Vari�vel para armazenar o n�mero da conta corrente
    float saldo, debito, credito, saldo_atual; // Vari�veis para armazenar o saldo, d�bito, cr�dito e saldo atual

    // Solicita ao usu�rio que insira o n�mero da conta corrente
    printf("\nEscreva o seu numero da sua conta corrente: ");
    scanf("%i", &numero_conta_corrente); // L� o n�mero da conta corrente inserido pelo usu�rio

    // Solicita ao usu�rio que insira o saldo da conta
    printf("\nO seu saldo e: ");
    scanf("%f", &saldo); // L� o saldo inserido pelo usu�rio

    // Solicita ao usu�rio que insira o d�bito
    printf("\nVoce tem um debito para descontar de: ");
    scanf("%f", &debito); // L� o d�bito inserido pelo usu�rio

    // Solicita ao usu�rio que insira o cr�dito
    printf("\nVoce tem um credito para adicionar de: ");
    scanf("%f", &credito); // L� o cr�dito inserido pelo usu�rio

    // Calcula o saldo atual subtraindo o d�bito e adicionando o cr�dito ao saldo inicial
    saldo_atual = (saldo - debito + credito);

    // Exibe o saldo atual com duas casas decimais
    printf("\nSeu saldo atual e de: %.2f", saldo_atual);

    // Verifica se o saldo atual � positivo ou negativo e exibe a mensagem correspondente
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

