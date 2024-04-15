#include <stdio.h>

int main() {
    // Passo 1: Ler os dados do cliente
    int numero_conta;
    float saldo, debito, credito;

    printf("Digite o número da conta do cliente: ");
    scanf("%d", &numero_conta);

    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);

    printf("Digite o débito: ");
    scanf("%f", &debito);

    printf("Digite o crédito: ");
    scanf("%f", &credito);

    // Passo 2: Calcular o saldo atual
    float saldo_atual = saldo - debito + credito;

    // Passo 3: Verificar se o saldo é positivo ou negativo e exibir a mensagem apropriada
    if (saldo_atual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
