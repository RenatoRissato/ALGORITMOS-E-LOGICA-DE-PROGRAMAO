#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual;
    int idade_anos, idade_meses, idade_dias, idade_semanas;

    // Solicita o ano de nascimento
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // Solicita o ano atual
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // Calcula a idade em anos
    idade_anos = ano_atual - ano_nascimento;

    // Calcula a idade em meses
    idade_meses = idade_anos * 12;

    // Calcula a idade em dias (considerando todos os anos com 365 dias)
    idade_dias = idade_anos * 365;

    // Calcula a idade em semanas (considerando uma semana com 7 dias)
    idade_semanas = idade_dias / 7;

    // Exibe os resultados
    printf("Idade em anos: %d\n", idade_anos);
    printf("Idade em meses: %d\n", idade_meses);
    printf("Idade em dias: %d\n", idade_dias);
    printf("Idade em semanas: %d\n", idade_semanas);

    return 0;
}

