#include <stdio.h>

int main() {
    float horas_trabalhadas_mes, salario_por_hora, salario_total, horas_extras;

    // Solicita ao usu�rio o n�mero de horas trabalhadas em um m�s e o sal�rio por hora
    printf("Digite o numero de horas trabalhadas em um mes: ");
    scanf("%f", &horas_trabalhadas_mes);
    printf("Digite o salario por hora: ");
    scanf("%f", &salario_por_hora);
    
    // Verifica se h� horas extras
    if (horas_trabalhadas_mes > 160) { // 40 horas por semana * 4 semanas = 160 horas
    horas_extras = horas_trabalhadas_mes - 160;
        // Calcula o sal�rio total com horas extras (considerando o acr�scimo de 50%)
        salario_total = 160 * salario_por_hora + horas_extras * salario_por_hora * 1.5;
        printf("O salario total do funcionario e: %.2f\n", salario_total);
          } else {
        // Calcula o sal�rio total sem horas extras
        salario_total = horas_trabalhadas_mes * salario_por_hora;
         printf("O salario total do funcionario e: %.2f\n", salario_total);
    }

    return 0;
}
