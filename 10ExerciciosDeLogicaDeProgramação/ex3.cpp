#include <stdio.h>

int main() {
    float litro, preco;
    char combustivel;

    printf("Qual combustivel voce deseja (alcool ou gasolina): ");
    scanf(" %c", &combustivel);

    printf("Quantos litros de combustivel voce deseja colocar: ");
    scanf("%f", &litro);

    switch (combustivel) {
        case 'a':
        case 'A':
            if (litro <= 20) {
                preco = litro * 3.39 * (1 - 0.03); // Desconto de 3% para até 20 litros
            } else {
                preco = litro * 3.39 * (1 - 0.05); // Desconto de 5% para mais de 20 litros
            }
            printf("O valor que voce vai pagar e: %.2f\n", preco); // Imprime o valor
            break;
        case 'g':
        case 'G':
            if (litro <= 20) {
                preco = litro * 5.39 * (1 - 0.04); // Desconto de 40% para até 20 litros
            } else {
                preco = litro * 5.39 * (1 - 0.06); // Desconto de 60% para mais de 20 litros
            }
            printf("O valor que voce vai pagar e: %.2f\n", preco); // Imprime o valor
            break;
        default:
            printf("Opcao Invalida\n"); // Imprime mensagem de erro para opção inválida
            break;
    }

    return 0;
}


